# include<iostream>
using namespace std;
# include<stack>

// this is the function i a writring for sort the stack 

// first write the function for insert the stack in the sorted way in the stack 

void insertstack(stack<int> &stack , int num){

    // base case 
    if(stack.empty() || (!stack.empty() && stack.top() < num)){
        stack.push(num);
        return ;

    }

    // side the top element for some time 

    int n=stack.top();
    stack.pop();

    // recursive call the function 

    insertstack(stack ,num);
    stack.push(n); // --> this is to put the side stack again back in the stack 
}


// now i am writhing the function for sort the stack 

void sortstack(stack<int> &stack ){
  
  // basae case 

  if(stack.empty()){
    return ;
  }

// side the top element for some time 

int num=stack.top();
stack.pop();

// recusrive call the function 

sortstack(stack);
insertstack(stack , num);
           
}

int main(){

// making  the stack with the stl proccess 

stack<int> s;

s.push(3);
s.push(5);
s.push(5);
s.push(3);
s.push(6);

cout<<"the top element of the stack is "<<s.top()<<endl;


sortstack(s);
    
    cout << "After sort the stack is: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;


    return 0;
}