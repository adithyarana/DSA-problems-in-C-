# include<iostream>
using namespace std;

// this is a program for reverse a linked list 

// in this we will reverse a lnked list using recursion


class node{

public:
int data;
node*next;

// cerate a contructor

node(int data){
 this-> data=data;
 this-> next=NULL;
}

};

void insertHead(node* &head , int d){ // it is also called insert at start
    // new node create

    node* temp =new node(d);
    temp->next=head;
    head=temp;
}

void insertTail(node* &tail , int d){ // it is also called insert at end
    // new node create
     node* temp =new node(d);
     tail->next =temp;
     tail =temp;
}

void print(node* &head){
    node*temp=head;

    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// this is a function to reverse a linked using a recursion
void reverselinkedlist(node * &head , node* curr ,node*prev ){

    // base case
    if(curr==NULL){
        head=prev;
        return;
    }
    node*forward=curr->next;
    reverselinkedlist(head , forward , curr);
    curr->next=prev;
}

    // solve one statemt and other recursion will handle it

 node* reversenode(node* head){

        node* curr=head;
        node* prev=NULL;

        reverselinkedlist(head, curr ,prev);
        return head;
    }
    

int main(){

// created a new node
node* node1=new node(1);
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

insertTail(tail , 7);
print(head);



  // Print original linked list
    cout << "Original Linked List: ";
    print(head);

    // Reverse and print reversed linked list
    head = reversenode(head);
    
    cout << "Reversed Linked List: ";
    print(head);


cout<<"the head is "<<head->data<<endl;
cout<<"the tail is "<<tail->data<<endl;


    return 0;
}