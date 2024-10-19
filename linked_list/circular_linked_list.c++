# include<iostream>
# include<map>
using namespace std;

class node{

    public:

    int data;
    node*next;

    // constructor

    node(int d){ 
        this->data=d;
        this->next=NULL;
    }

    // destructor 

    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for with data"<<" "<<value <<endl;
    }
};

void insertnode(node* &tail , int element,  int d){
  
  // empty list
  if(tail==NULL){
  node* newnode= new node(d);
  tail=newnode;
  newnode->next=newnode;
  }
  else{
    // non empty list 
    // assuming that the element is present in the list

    node* curr =tail;

    while(curr->data != element){
          curr =curr ->next;
    }

    // element found -> curr is represtering element wala node
    node* temp =new node (d);
    temp->next=curr->next;
    curr->next=temp;
  }
}

void print(node* tail){
    node * temp =tail;

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail != temp);
    cout<<endl;
}

void deletenode(node* tail , int value){

    // for the empty list 

    if(tail==NULL){
        cout<<"list is empty som plz cheal again"<<endl;

    }else{
        // non- empty list

        // assuming that valur is present  int the linked list 

        node* prev =tail;
        node*curr= prev->next;

        while(curr-> data != value){
           prev=curr;
           curr =curr->next;
        }

          prev->next=curr->next;
            curr->next=NULL;
            delete curr;
    }
}

// this  is a function to cheak that the linkes list is circualr or not ....
bool iscircularlist(node* head){

    // empty list 
    if(head==NULL){
        return true;
    }

    node* temp = head->next;
     while(temp != NULL || temp != head){
        temp=temp->next;

     }
     if(temp==head){
        return true;
     }
     return false;
}

// this is a function to detect that in linked list loop id present or not 

bool detectloop(node* head){

    if(head==NULL){
        return false;
    }

map<node* ,bool>visited;


node*temp=head;
while(temp !=NULL){

    // CYCLE IS PRSENT
    if(visited[temp]==true){
        return true;
    }
    visited[temp]=true;
    temp=temp->next;
}
return false;

}

int main(){

node*tail =NULL;

insertnode(tail , 5 ,3);
print(tail);

insertnode(tail , 3 ,4);
print(tail);

insertnode(tail , 4 ,6);
print(tail);

insertnode(tail , 6,8);
print(tail);

insertnode(tail , 4 ,5);
print(tail);

insertnode(tail , 3 ,3);
print(tail);

insertnode(tail , 8 ,3);
print(tail);



deletenode(tail , 4);
print(tail);



if(iscircularlist){

    cout<<"the list is circular "<<endl;
}
else{
    cout<<"the list is not circular"<<endl;
}

// to cheak the linked list  is deceted loop or not 

if(detectloop){

    cout<<"the loop is present"<<endl;
}else{
    cout<<"the loop is not present"<<endl;
}


    return 0;
}