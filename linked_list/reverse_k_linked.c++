# include<iostream>
using namespace std;

// this is a program to revsrse a linked list in  groups it means reverse 2 linked at a time 

class node{

public:

int data;
node* next;

// constructor 

node(int data){
    this->data=data;
    this->next=NULL;
}

};

// to insert a node at head function

void insertHead(node* &head , int d){

    // new node create
    node* temp = new node(d);
    temp->next=head;
    head=temp;
}

// function to print a linked list 

void print(node* &head){
    node*temp=head;

    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// function to insert at tail

void insertTail(node* &tail , int d){

    // crete a new node 
    node*temp= new node(d);
    tail->next=temp;
    tail=temp;
}

// this is a function to revese l linked list 

node* kreverse(node* head , int k){

    // base case
    if(head==NULL){
        return NULL;
    }

    // step 1 -> reverse a fisrt k nodes 
    node* next= NULL;
    node*curr=head;
    node*prev=NULL;
    int count=0;

    while(curr != NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    // step 2-> recursion dheak laga aaga

    if(next != NULL){
        head -> next = kreverse(next , k);
    }

    // step 3-> return head of reversed list
     return prev;

}

int main(){

    // create a new node
    node*node1 =new node(1);

    node*head=node1;
    node*tail=node1;
    print(head);

    insertTail(tail , 2);
    print(head);

    insertTail(tail , 3);
    print(head);

    insertTail(tail , 4);
    print(head);

    insertTail(tail , 5);
    print(head);

    insertTail(tail , 6);
    print(head);

    
    head = kreverse(head, 2);
    print(head);



    return 0;
}
