# include<iostream>
using namespace std;
# include<stack>

// reverse a string  uisng stack 

int main(){

    string str ="adithya";

    stack<char> s;

    for(int i=0 ;i<str.length() ; i++){
        //char ch=str[i];
        s.push(str[i]);

    }

    string ans=" ";

    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout<<"the reverse of stack is "<<ans <<endl;




    return 0;
}