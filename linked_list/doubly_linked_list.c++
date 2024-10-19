# include<iostream>
using namespace std;

class node{
public:

int data;
node*prev;
node*next;

//constructor

node(int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;
}

~node(){
    int value=this->data;
    if(next!=NULL){
        delete next;
        next=NULL;
    }
    cout<<"memory is free for node with data"<<value<<endl;
}
};

// traverse the code
void print(node* head){
    node* temp=head;
    while( temp!=NULL){
        cout<<temp->data << " ";
        temp=temp->next;
    }
    cout<<endl;
}

// gives the lenght of the linked list
int getlenght(node* head){
    int len=0;
node* temp=head;
    while( temp!=NULL){
       len++;
        temp=temp->next;
    }
   
   return len;

}

void inserthead(node* &head , int d){ // to insert  the  new node at the head of the linked list code 

    node*temp= new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void inserttail(node* &tail , int d){ // to insert  the  new node at the tail of the linked list code 
    // print  the new node
    node*temp= new node(d);

    tail->next=temp;
    tail->prev=temp;
    tail=temp;
}

void insertposition(node* &tail , node*&head , int position , int d){  // this is   code to insert in the middle of the linked list 

    // insert at start
    if(position==1){
        inserthead(head , d);
        return;
    }

    node* temp= head;
    int count=1;

    while (count < position-1)
    {
        temp=temp->next;
        count++;
    }

    //insert at last position 
    if(temp -> next==NULL){
        inserttail(tail , d);
        return;
    }
    
    // crareting a node for d;
     node* nodeToinsert =new node(d);

     nodeToinsert -> next=temp -> next;

     temp -> next =nodeToinsert;
}

void deletenode(int position , node* &head){

    // deleting the start or the first node
    if(position==1){
        node*temp=head;
        head=head->next;
        //memory free start node
        temp->next=NULL;
        delete temp;
    }
    else{
         
         // deleting any middle of the node
         node*curr=head;
         node*prev=NULL;

         int count=1;
         while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
         }

         prev->next=curr->next;
         curr->next=NULL;
         delete curr;
    }
}
int main(){

node* node1=new node(10);
 node*head=node1;
 node*tail=node1;
 print(head);

cout<<getlenght(head)<<endl;

inserthead(head , 11);
print(head);

inserttail(tail , 12);
print(head);

insertposition(tail , head , 1 , 100);
print(head);

deletenode(1,head);
print(head);

cout<<"head"<<head->data<<endl;  // to point  the head and tail 
cout<<"tail"<<tail->data<<endl;
    return 0;
}