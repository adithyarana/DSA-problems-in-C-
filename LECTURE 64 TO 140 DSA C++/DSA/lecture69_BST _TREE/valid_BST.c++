# include<iostream>
# include<queue>

using namespace std;

class node{
public:

int data;
node*left;
node*right;

// constructor

node(int data){

    this->data=data;
    this->left=NULL;
    this->right=NULL;
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

// this is the function  ot validata if the tree is true or not 

bool BST(node* root , int min , int max){

    // base case

   if(root==NULL){
       return true;
   }

   if(root->data >= min && root->data <= max){
       bool left = BST(root->left , min , root->data);
       bool right=BST(root->right , root->data , max);
       return left & right;
   }
   else{
       return false;
   }

}


int main(){

node* root=NULL;


cout << "enter the data to create a BST TREE" << endl;
takeInput(root);

cout << "printing the BST TREE" << endl;
levelOrderTraversal(root);


if(BST){
    cout<<"the tree is true"<<endl;
}else{
    cout<<"the tree is false"<<endl;
}


    return 0;
}