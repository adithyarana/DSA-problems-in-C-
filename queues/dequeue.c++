# include<iostream>
using namespace std;
# include<queue>

// making the dequeue using stl 
// dequeue is Doubley ended queue

int main(){

deque<int> d;

d.push_front(12);
d.push_back(13);

cout<<"the front is"<<d.front()<<endl;

cout<<"the back is"<<d.back()<<endl;

d.pop_front();

cout<<"the front is"<<d.front()<<endl;

cout<<"the back is"<<d.back()<<endl;

d.pop_back();

if(d.empty()){
    cout<<"the queue is empty"<<endl;
}else{
    cout<<"the queuue is not empty"<<endl;
}

    return 0;
}