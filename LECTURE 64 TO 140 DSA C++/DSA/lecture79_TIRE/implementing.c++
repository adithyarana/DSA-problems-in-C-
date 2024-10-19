# include<iostream>
using namespace std;

// creating  the tire 
class Trienode{

public:

char data;
Trienode * children[26];
bool istreminal;

// constructor

Trienode(char ch){

    data=ch;

    for(int i=0 ;i<26 ; i++){
        children[i]=NULL;
    }
    istreminal=false;
}

};

class Trie{

public:
Trienode* root;

Trie(){
    root = new Trienode('\0');
}


// this is the function for insert in the tire 

void insertutil(Trienode* root, string word) {
    // base case 
    if (word.length() == 0) {
        root->istreminal = true;
        return;
    }

    // assumption word will be in CAPS
    int index = word[0] - 'A';
    Trienode* child;

    // present 
    if (root->children[index] != NULL) {
        child = root->children[index];
    } else {
        // absent 
        child = new Trienode(word[0]); 
        root->children[index] = child;
    }

    // recursion 
    insertutil(child, word.substr(1));
}


void insertWord(string word){
    insertutil(root , word);
}




// this is the function to search in the tire

bool searchutil(Trienode* root , string word){
   
   // base case 
   if(word.length()==0){
     return root->istreminal;
     
   }

   int index = word[0]-'A';
   Trienode* child;

   // present 

   if(root->children[index]!=NULL){
   child=root->children[index];
   }
   else{

    // absent case 

    return false;
   }
   
   // recursion call 
   return searchutil(child , word.substr(1));



}

bool searchWord( string word) {
    return searchutil(root, word);
}



};

int main(){

Trie * t= new Trie();

t->insertWord("abcd");

cout<<"present or not "<<t->searchWord("abcd")<<endl;

    return 0;
}

