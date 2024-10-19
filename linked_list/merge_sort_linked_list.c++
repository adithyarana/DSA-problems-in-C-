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


// now i amn writing the function on merge sort 

// first find the mid in the linked list by slow and fast method 

node* findmid(node* head){

    node* slow=head;
    node* fast=head;


    while(fast != NULL &&  fast->next != NULL && fast ->next->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}


// now write the function to merge two sorted liniekd list 

node* merge(node* left , node* right){

    if(left==NULL){
        return right;
    }
    
    if(right==NULL){
        return left;
    }

    node* ans= new node(-1);
    node* temp=ans;

    while(left != NULL && right != NULL){
        if(left->data < right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else{
            
            temp->next=right;
            temp=right;
            right=right->next;

        }
    }

    while(left != NULL){
         temp->next=left;
         temp=left;
         left=left->next;
    }

    while(right != NULL){
        temp->next=right;
        temp=right;
        right=right->next;


    }
    ans=ans->next;
    return ans;

}

node* mergesort(node * head){

    if(head==NULL || head ->next ==NULL){
        return head;
    }

    // break the linked list in two parts after finding the mid calling the function

    node* mid=findmid(head);

    node* left=head;
    node* right=mid->next;
    mid->next =NULL;

    // recursive call the function 

    left= mergesort(left);
    right=mergesort(right);
      
      // merge both sorteed linked list 

      return merge(left , right);
     
}

int main(){

// created a new node
node* node1=new node(2);
node*head=node1;
node*tail=node1;


insertTail(tail , 5);


insertTail(tail , 6);


insertTail(tail , 4);


insertTail(tail , 8);


insertTail(tail , 7);


insertTail(tail , 3);

print(head);


cout<<"the orginal  linked list  is "<<endl;
print(head);

node* temp = mergesort(head);

cout<<"the sorted linke list in the merge sort is "<<endl;
print(temp);

    return 0;
}