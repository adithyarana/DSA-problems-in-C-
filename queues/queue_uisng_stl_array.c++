# include<iostream>
using namespace std;
# include<queue>


// implementing queue  using array 

class Queue{

public:

int *arr;
int front;
int rear;
int size;

// crete a constructor

Queue(int size){
    this->size=size;
    arr=new int(size);
    front=0;
    rear=0;
}

// to push the element in the queue

void enque(int data){

    if(rear==size){
        cout<<"queue is empty"<<endl;
    }else{
        arr[rear]=data;
        rear++;
    }
}

int deque(){
    if(front==rear){
        return -1;
    }else{
        arr[front]=-1;
        front++;
        if(front==rear){
            front=0;
            rear=0;
        }
    }
}

int front(){

if(front==rear){
    return-1;
}
else{
    return arr[front];
}

}

bool empty(){
    if(front==rear){
        return true;
    }else{
        return false;
    }
}




};


int main(){

queue<int>q;


q.push(2);






// first implementing the queue using stl 

// queue<int> q;

// q.push(11);
// q.push(12);
// q.push(13);


// cout<<"the size of the queue : "<<q.size()<<endl;

// q.pop();

// cout<<"the size of thw queue is: "<<q.size()<<endl;

// cout<<"the front of element if the queue is"<<q.front()<<endl;


// if(q.empty()){
// cout<<"it is empty"<<endl;

// }
// else{
//     cout<<"it is not empty"<<endl;
// }




    return 0;
}