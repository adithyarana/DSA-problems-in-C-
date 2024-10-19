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


void insertHead2(node* &head , int d){ // it is also called insert at start
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

void insertTail2(node* &tail , int d){ // it is also called insert at end
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

// function to revrsre the lineed list 

node* revrese(node* head){
    
    node* curr=head;
    node* prev=NULL;
    node* next=NULL;
    
    while(curr != NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;

 
}

//now the function to insert at tail 

void insertattail(struct node* &head , struct node* &tail , int val){
        
        node* temp =new node(val);

        // empty lsit 

        if(head==NULL){
            head=temp;
            tail=temp;
            return;
        }
        else{
            tail->next=temp;
            tail=temp;
        }

}

// this is the function  too add two linked list 

  struct node* add(struct node* first, struct node* second) {
        int carry = 0;
        
        node* ansHead = NULL;
        node* ansTail = NULL;
        
        while(first != NULL || second != NULL || carry != 0) {
            
            int val1 = 0;
            if(first != NULL)
                val1 = first -> data;
                
            int val2 = 0;
            if(second !=NULL)
                val2 = second -> data;
            
            
            int sum = carry + val1 + val2;
            
            int digit = sum%10;
            
            //create node and add in answer Linked List
            insertattail(ansHead, ansTail, digit);
            
            carry = sum/10;
            if(first != NULL)
                first = first -> next;
            
            if(second != NULL)
                second = second -> next;
        }
        return ansHead;
    }

struct node* addtwolist(struct node* first , struct node* second){


    first = revrese(first);
    second = revrese(second);
    node* ans = add(first, second);
    return revrese(ans);
}




int main(){

// created a new node
node* node1=new node(1);
node*head=node1;
node*tail=node1;


insertTail(tail , 2);

insertTail(tail , 3);


insertTail(tail , 4);

insertTail(tail , 5);


insertTail(tail , 6);


insertTail(tail , 7);

print(head);




cout<<"the new linked list is "<<endl;
// created a new node
node* node2=new node(1);
node*head2=node2;
node*tail2=node2;


insertTail(tail2 , 2);

insertTail(tail2 , 3);


insertTail(tail2 , 4);

insertTail(tail2 , 5);


insertTail(tail2, 6);


insertTail(tail2 , 7);

print(head);


// this is to print the linked list 
    cout << "the result linked list is " << endl;
    node* result = addtwolist(head, head2);
    print(result);

    return 0;
}


