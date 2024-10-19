# include<iostream>
using namespace std;

// finding the middle of the linked list 
// if the the linked list is even the middle should be in middle 
// id the linked is odd the middle should be from the right side of the linked list


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

// first find the lenght to guss the middle of the linked list

int getlenght(node* head){

    int len=0;
    while(head != NULL){
          len++;
          head=head->next;
    }
    return len;
}

node* findmiddle( node* head){ // this is  the function to find the middle of the linked list
    int len= getlenght(head);
    int ans=(len/2);

    node* temp = head;
    int cnt=0;

    while(cnt < ans){
        temp =temp->next;
        cnt++;
    }
    return temp;
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

cout<<"the lenght of the linked lsit is"<<" "<<getlenght(head)<<endl;

cout<<" the middle of the linked is"<<" "<<findmiddle(head)-> data<<endl;

cout<<"the head is "<<head->data<<endl;
cout<<"the tail is "<<tail->data<<endl;


    return 0;
}