# include<iostream>
# include<map>
# include<vector>
using namespace std;

// singly  linked list=> 


class node{

public:
int data;
node*next;

// cerate a contructor

node(int data){
 this-> data=data;
 this-> next=NULL;
}
// creatiing the destructor to delete the nodes

~node(){
    int value=this->data;
    // memory free

    if(this->next!=NULL){
        delete next;
        this-> next=NULL;

    }
    cout<<"memory iss free for node with data"<<" "<<value<<endl;
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

void insertPosition( node* &tail , node* &head , int position ,int d){

    if(position ==1){
        insertHead(head ,d);
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
        insertTail(tail , d);
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
        cout<<"the loop is presenr at"<<" "<<temp->data<<endl;
        return true;
    }
    visited[temp]=true;
    temp=temp->next;
}
return false;

}

// this functio that i am writig this is approch 2 to cheak the linked list is having loop or not .. this method is called Floyed loop method
// this is a 2 method to cheak if linked list is having loop or not 

// the below three fumctio are combine to dectect the cycle of loop

node* floyedloop(node* head){

    if(head==NULL){
        return NULL;
    }

    node* slow= head;
    node* fast=head;

    while(slow != NULL && fast != NULL){
        fast=fast->next;

        if(fast != NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){
            cout<<"the loop is present at node"<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

// this function is for find the first node in the loop of linked  list it means from whrer the loop start (startig point of the loop)

node*Firstnode(node* head){

// base case
if(head==NULL){
    return NULL;
}

 node* intersection= floyedloop(head);

 node* slow=head;

 while(slow != intersection){
    slow=slow->next;
    intersection=intersection->next;
 }
 return slow;

}

// this is a function to delete loop form  the linked list 

void deleteloop(node* head){
// base case 

if(head==NULL){
    return;
}

node* startloop=Firstnode(head);
node* temp= startloop;

while(temp->next != startloop){
    temp=temp->next;
}

temp->next=NULL;


}



// this is the function that i am writing is to sort 0s , 1s, ,2s in the linked list 

node* sort012(node* &head){
 
 // make zero , one, two variablres 

 int zerocount=0;
 int onecount=0;
 int twocount=0;

node* temp= head;

while(temp!= NULL){
  if(temp->data==0){
    zerocount++;
  }
  else if(temp->data==1){
    onecount++;
  }
  else if(temp->data==2){
    twocount++;
  }
   temp=temp->next;
}

temp=head;

while(temp!=NULL){
    if(zerocount !=0){
        temp->data=0;
        zerocount--;
    }
    else if(onecount !=0){
        temp->data=1;
        onecount--;
    }
    else if(twocount != 0){
        temp->data=2;
        twocount--;
    }
    temp=temp->next;
}
return head;


}

//this is the function to cheak the palindrome or not  in the linked list 


bool cheakpalindrome(vector<int> arr){
    
    int n=arr.size();
    int s=0;
    int e=n-1;

    while(s<=e){
        if(arr[s] != arr[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

bool palindrome(node* head){

    vector<int>arr;

    node* temp=head;

    while(temp != NULL){

        arr.push_back(temp->data);
        temp=temp->next;

    }
    return cheakpalindrome(arr);
}




int main(){
// created a new node
node* node1=new node(1);
// cout<< node1 ->data <<endl;
// cout<<node1-> next<<endl;

//head pointed to nodel;
node*head=node1;
node*tail=node1;
//print(head);
 
insertTail(tail , 0);
//print(head);

insertTail(tail  , 2);
print(head);

//insertPosition(tail , head , 4 , 0);
//print(head);

// this is to create a looop in the linked list 
//tail->next=head->next;

//print(head);

cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;

//deletenode(4 , head);
//print(head);

// to cheak the linked is deceted loop or not 

/*if(floyedloop(head) != NULL){

    cout<<"the loop is present"<<endl;
}else{
    cout<<"the loop is not present"<<endl;
}

node* loop=Firstnode(head);

cout<<"the first node from where loop start in the linked  list is "<<" "<<loop->data<<endl;

deleteloop(head);
print(head);*/



// thiss is to print the fumction of sort 0s, s1 , 2s 
// cout<<"the original linked is "<<endl;
// print(head);

// sort012(head);

// cout << "sorted Linked List: "<<endl;
// print(head);


if(palindrome){
     cout<<"the linked list is palindrowm"<<endl;
     }else{
        cout<<"the linked lsit is not palindrome"<<endl;
     }

    return 0;
}