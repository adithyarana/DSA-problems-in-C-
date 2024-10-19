# include<iostream>
using namespace std;

// linear search using recursiion 

bool linearsearch( int arr[] , int n  , int search){

// base case
if(n==0){
    return false;
}

if(arr[0]==search){
    return true;
}else{

    return linearsearch(arr+1 , n-1 , search);
}



}

int main(){

int arr[10] , n , search;

cout<<"enter the size of the array"<<endl;
cin>>n;

cout<<"enter the elements in the array"<<endl;

for(int i=0 ;i<n ;i++){

    cin>>arr[i];
}

cout<<"enter the element to search"<<endl;
cin>>search;

int ans=linearsearch(arr , n ,search);

if(ans){

    cout<<"the element is there"<<endl;
}else{
    cout<<"the element is not there"<<endl;
}

    return 0;
}