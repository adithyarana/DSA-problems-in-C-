#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// Writing a function to reverse a queue using stack algorithm 
int reverse(queue<int> &q) {
    stack<int> s;

    // Remove the element from queue and push in the stack 
    while(!q.empty()) {
        int temp = q.front();
        q.pop();
        s.push(temp);
    }

    // Remove elements from stack and push them back to the queue
    while(!s.empty()) {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
    
}

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "Queue before reverse: ";
    for(queue<int> temp = q; !temp.empty(); temp.pop()) {
        cout << temp.front() << " ";
    }
    cout << endl;

    reverse(q);

    cout << "Queue after reverse: ";
    for(queue<int> temp = q; !temp.empty(); temp.pop()) {
        cout << temp.front() << " ";
    }
    cout << endl;

    return 0;
}
