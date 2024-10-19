# include<iostream>
using namespace std;
# include <stack>


// implementing the stack using array(class)

class Stack {

public:

   int *arr;
   int top;
   int size;


   // create a constructor 

   Stack( int size){
            
    this->size=size;
    arr = new int(size);
    top=-1;

   }

   // function fo push operation 

   void push(int element){
  
   if(size-top >1){
    top++;
    arr[top]=element;
   }
   else{
    cout<<"the stack is over flow"<<endl;
   }

   }

   // function for pop operation 

int pop(){
    if(top >=0){
        top--;
    }
    else{
        cout<<"stacl underflow"<<endl;
    }
   }

// function to find the top of the element

int peek(){

    if(top >=0){
      return arr[top];
    }
    else{
        cout<<"the stack is empty"<<endl;
        return -1;
    }
}

// to cheak stack is empty or not

bool isempty(){
    if(top=-1){
        return true;
    }
    else{
        return false;
    }
}


};



int main(){

Stack st(5);

st.push(23);
st.push(24);
st.push(25);



cout<<"the top element is "<<st.peek()<<endl;

st.pop();

cout<<st.peek()<<endl;

st.pop();

cout<<st.peek()<<endl;

st.pop();

// cout<<st.peek()<<endl;

// if(st.isempty()){

//     cout<<"stack is empty "<<endl;
// }else{

//     cout<<"stack is not empty"<<endl;
// }




/*
// creating the stack......
// this is uisng STL we are creating the stack

stack<int> s;

s.push(1);

s.push(2);

// pop the element

s.pop();

cout<<"the top element is "<<s.top()<<endl;

// empty or not

if(s.empty()){

    cout<<"the stackk is empty"<<endl;
}else{

    cout<<"stack is not empty"<<endl;
}

cout<<"the size of stack is "<<s.size()<<endl;*/


    return 0;
}