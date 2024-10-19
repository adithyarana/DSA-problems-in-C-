# include<iostream>
# include<queue>
using namespace std;

// creating the trees 

class node{

public:

int data;
node* left;
node*right;

// creating the constructor 

node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;

}

};

// now creating  afunction  to build a binary tree using the recursion to call the node recursvely

node* buildtree(node* root){

int data;
cout<<"Enter the data : "<<endl;
cin>>data;
root=new node(data);

// if there is no child of parent node put as -1;

if(data==-1){
    return NULL;
}

cout<<"Enter the data for inserting at left node : "<<data<<endl;
root->left=buildtree(root->left);

cout<<"Enter the data for inserting at right node : "<<data<<endl;
root->right=buildtree(root->right);

return root;

}

// creating a tree to print in  ther level order traversal 

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

//  writing a function for inorder traversal

void inorder(node* root){

    // base case 

    if(root==NULL){
        return ;
    }

    // recursively calling the function 

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

// this id a function to create pre order 

void preorder(node* root){

    // base case 

    if(root==NULL){
        return ;
    }

    // recursively calling the function 

    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

// this is a function to ceate a post order 

void postorder(node* root){

    // base case 

    if(root==NULL){
        return ;
    }

    // recursively calling the function 

    postorder(root->left);
    postorder(root->right);
     cout<<root->data<<" ";

}



int main(){

node*root=NULL;

// creating a tree

root=buildtree(root);


// 1 3 7 -1  -1 11 -1 -1 5 17 -1 -1 -1
 cout<<"printing the level order traversal"<<endl;
levelOrderTraversal(root);

cout<<"the inorder traversal is "<<endl;
inorder(root);

cout<<endl;

cout<<"the preorder traversal is "<<endl;
preorder(root);

cout<<endl;

cout<<"the post order traversal is "<<endl;
postorder(root);
    return 0;
}