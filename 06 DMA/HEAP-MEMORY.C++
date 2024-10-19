# include<iostream>
using namespace std;

int getsum(int *arr , int n){
    int sum =0 ;

    for(int i=0 ;i<n ;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){

//heap memory how to create ? heap is called dynamic memory alllocation and stack is called static memory allocation 

// to craete a an array in heap memeory

int n;
cout<<"enter the size of the array"<<endl;
cin>>n;


int *arr = new int[n];

for(int i=0 ;i<n ;i++){
    cin>>arr[i];
}

cout<<"the answer is "<<getsum(arr , n)<<endl;

    return 0;
}