# include<iostream>
using namespace std;

// linked list -> it is a linear data structure , that is collections of nodes.. in the node there will be the data and next will be the adress node <<
// why ? -> linked is because to change the  size of the array in the run time 

// types to inlked list
//1 . singly linked list
//2 . doubley linked list
//3 . circular linked list
// 4 . circular doubly linked list


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

int main(){

// created a new node
node* node1=new node(10);
cout<< node1 ->data <<endl;
cout<<node1-> next<<endl;

    return 0;
}