# include<iostream>
using namespace std;
# include<stack>

// writing the fuction to reverse the stack uisng the recursion 


void insertatbottom(stack<int> &s, int x){

  // base case 

  if(s.empty()){
    s.push(x);
    return;
  }

  // side the top element for some time 

  int num=s.top();
  s.pop();

  // recursive call the function 

  insertatbottom(s ,x);
  s.push(num);

}

void reversestack(stack<int> &stack){

    // base case 

    if(stack.empty()){
        return ;
    }

    int num= stack.top();
    stack.pop();

    //recursive call the function 

    reversestack(stack);
    insertatbottom(stack , num);
}


int main(){

stack<int> s;

s.push(1);
s.push(2);
s.push(3);

cout<<"the top element is "<<s.top()<<endl;

cout << "After reverse the stack is: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}