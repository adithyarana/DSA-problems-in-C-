# include<iostream>
using namespace std;
# include<stack>



void solve(stack<int> &inputStack ,int count , int size){

    // base case

    if(count==size/2){
        inputStack.pop();
        return;
    }

     // store the top element in the side for the bit

     int num=inputStack.top();
      inputStack.pop();

     // recuresive call the function

     solve(inputStack , count+1 , size);

     inputStack.push(num);
}


void deletemiddle(stack<int> &inputStack ,int n){


   int count=0;
   solve(inputStack , count , n);

}

int main(){

stack <int> s;

s.push(2);
s.push(3);
s.push(4);
s.push(3);
s.push(2);


    cout << "The top element is: " << s.top() << endl;

    deletemiddle(s, 5);

    cout << "After deleting the middle, the stack is: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;


    return 0;
}