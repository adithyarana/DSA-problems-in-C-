# include<iostream>
# include<queue>
using namespace std;

// insertion in heap 

class heap{

public:

int arr[100];
int size;

// constuctor 

heap(){

    arr[0]=-1;
    size=0;
}


void insert(int val){

size=size+1;
int index=size;

arr[index]=val;

while(index>1){

    int parent= index/2;

    if(arr[parent] < arr[index]){
        swap(arr[parent] , arr[index]);
        index=parent;
    }
    else{
        return ;
    }

}

}

void print(){

    for(int i=1 ;i<=size ;i++){

        cout<<arr[i]<<" ";

    }cout<<endl;
}

// function to delete in heap

void deletefromheap(){

    if(size==0){
        cout<<"nothing to delete"<<endl;
        return ;
    }

    // step 1 - put last index in ti first index

    arr[1]=arr[size];

    // step-2 remove 

    size--;

    // step 3 - root node to itd corect poistino 

    int i=1;

    while(i<size){
        int left=2*i;
        int right=2*i+1;

        if(left < size && arr[i] < arr[left]){

            swap(arr[i] , arr[left]);
            i= left;
        }
        else{
            if(right < size && arr[i] < arr[right]){

                swap(arr[i] , arr[right]);
                i=right;
            }
            else{
                return;
            }
        }
    }

}



};

// this is the function of heapify algo this function will convert an array to  max or min heap 

// this is the function for max heap build up

void heapify(int arr[] , int n , int i){

int largest=i;
int left=2*i;
int right=2*i+1;

if(left <= n && arr[largest] < arr[left]){
    largest=left;
}

if(right <= n && arr[largest] < arr[right]){
    largest=right;
}

if(largest != i){

    swap(arr[largest] , arr[i]);
    heapify(arr , n ,i);

}

}

// new this is the function for the heap sort 

void heapsort(int arr[] , int n){

    int size=n;

    while(size>1){

        // step 1 swap

        swap(arr[size] , arr[1]);
        size--;

        heapify(arr , size , 1);
    }
}



int main(){

heap h;

h.insert(50);
h.insert(55);

h.insert(53);

h.insert(52);

h.insert(54);
 
 h.print();

 h.deletefromheap();
 h.print();


int arr[6]={-1 , 54 , 53, 55 , 52 , 50};

int n=5;

for(int i=n/2 ; i>0 ;i--){
    heapify(arr  , n ,i);
}

cout<<"printiing the array"<<endl;

for(int i=1;i<=n ;i++){

    cout<<arr[i]<<" ";
}cout<<endl;

// print heap sort

heapsort(arr , n);

cout<<"the heap in sorted way is "<<endl;
for(int i=1;i<=n ;i++){

    cout<<arr[i]<<" ";
}cout<<endl;


// creating the heap using stl uisng priority  queue

// this is for creating for the  max heap
priority_queue<int> pq;

pq.push(4);
pq.push(5);
pq.push(3);
pq.push(7);

cout<<"element at the top is "<<pq.top()<<endl;
pq.pop();

cout<<"the size of the heap is "<<pq.size()<<endl;

// now to create a min heap

priority_queue<int , vector<int>  , greater<int> > minheap;

minheap.push(4);
minheap.push(5);
minheap.push(3);
minheap.push(7);



cout<<"element at the top is "<<minheap.top()<<endl;
minheap.pop();

cout<<"the size of the heap is "<<minheap.size()<<endl;


    return 0;
}