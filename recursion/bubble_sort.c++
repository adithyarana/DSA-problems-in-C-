#include <iostream>
using namespace std;

// print the bubble sort using resursion 

int bubblesort(int arr[] , int n){

    // base case
    if(n==0 || n==1){
        return 0;
    }
        
    for(int i=0 ;i<n ;i++){
    for(int j=i+1 ;j<n ;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
// recursiv calling
bubblesort(arr , n-1);
    
}

int main(){

int arr[19] , n;

cout<<"enter the size of the array"<<endl;
cin>>n;

cout<<"enter the elements in the array"<<endl;

for(int i=0 ;i<n ;i++){
    cin>>arr[i];
}

int ans=bubblesort(arr , n);

cout<<"the sorted array is "<<endl;
for(int i=0 ;i<n ;i++){
    cout<<arr[i]<<"  ";

}cout<<endl;

    return 0;
}