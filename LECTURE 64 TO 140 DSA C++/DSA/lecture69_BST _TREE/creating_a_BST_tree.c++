#include<iostream>
#include<queue>
using namespace std;

// TIME COMPLIXITY IS = O(LOGN)

class node {
public:
    int data;
    node* left;
    node* right;

    // create a constructor
    node(int d) {
        this->data = d;
        this->left = NULL; 
        this->right = NULL;
    }
};

// creating a tree to print in the level order traversal 
void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) { 
            // previous level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty()) { 
                // queue still has some child nodes
                q.push(NULL);
            }  
        }
        else {
            cout << temp -> data << " ";
            if (temp -> left) {
                q.push(temp -> left);
            }

            if (temp -> right) {
                q.push(temp -> right);
            }
        }
    }
}

// this is the function ro crete a binary tree

node* insertIntoBST(node *root, int d) {
    // base case 
    if (root == NULL) {
        root = new node(d);
        return root;
    }

    if (d > root->data) {    
        // insert into the right subtree
        root->right = insertIntoBST(root->right, d);
    } else {    
        // insert into the left subtree
        root->left = insertIntoBST(root->left, d);
    }
    
return root;
}

// this is the function to take input to form the BST tree
void takeInput(node*& root) {
int data;
cin >> data;

while(data != -1){
   root = insertIntoBST(root, data);
   cin >> data;
}
}


node * minValue(node* root){

node* temp = root;

while(temp->left != NULL){

    temp=temp->left;
}
return temp;

}

// this is hte function to delete the node from the BST tree 

node * deletenode(node * root , int val){

    // base case

    if(root==NULL){
        return root;
    }

    if(root->data==val){
       
       // node has 0 childs 

       if(root->left==NULL && root->right==NULL){
        delete root;
        return root;
       }

       // node has one child 
       
       // left part
       if(root->left != NULL && root->right ==NULL){
        node* temp= root->left;
        delete root;
        return temp;
       }

       // right part 

        if(root->left == NULL && root->right !=NULL){
        node* temp= root->right;
        delete root;
        return temp;
       }

       // node has 2 childres

       if(root->left!=NULL && root->right != NULL){

         int mini = minValue(root->right)->data;
         root->data=mini;

         root->right=deletenode(root->right , mini);
         return root;
       }

    }
    else if(root->data > val){
        // left part  ma jao
        root->left=deletenode(root->left , val);
    }
    else{
        // right part ma jao 
        root->left=deletenode(root->right , val);
        return root;
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

// this is the function to fing the minimun value in the bst tree 

node * minValue(node* root){

node* temp = root;

while(temp->left != NULL){

    temp=temp->left;
}
return temp;

}

// this is the function to fing the maximum value in the bst tree 
node * maxValue(node* root){

node* temp = root;

while(temp->right != NULL){

    temp=temp->right;
}
return temp;

}
int main() {

// create a node
node* root = NULL;

cout << "enter the data to create a BST TREE" << endl;
takeInput(root);

cout << "printing the BST TREE" << endl;
levelOrderTraversal(root);


cout<<"printing the inorder tree"<<endl;
inorder(root);

cout<<endl;

cout<<"printing the preorder tree"<<endl;
preorder(root);

cout<<endl;
cout<<"printing the  post order tree"<<endl;
postorder(root);

cout<<endl;
cout<<"the minmum value is "<<minValue(root)->data<<endl;

cout<<endl;

cout<<"the maximum value is "<<maxValue(root)->data<<endl;

// delete a node

root= deletenode(root , 3);

cout<<"printing the bst after deletion "<<endl;
levelOrderTraversal(root);


cout<<"printing the inorder tree"<<endl;
inorder(root);

cout<<endl;

cout<<"printing the preorder tree"<<endl;
preorder(root);

cout<<endl;
cout<<"printing the  post order tree"<<endl;
postorder(root);

cout<<endl;
cout<<"the minmum value is "<<minValue(root)->data<<endl;

cout<<endl;

cout<<"the maximum value is "<<maxValue(root)->data<<endl;



return 0; 
}
