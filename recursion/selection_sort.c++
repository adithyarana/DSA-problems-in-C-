#include<iostream>
using namespace std;

//selcction sort using recursion 

int selectionsort(int arr[] , int n){
    // base case 
    if(n==0 || n==1){
        return 0;
    }

    for(int i=0 ;i<n-1 ;i++){

        int min_index=i;

        for(int j=i+1 ;j<n ;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
    // recursive calling 
    selectionsort(arr , n-1);
}


int main(){


int arr[19] , n;

cout<<"enter the size of the array"<<endl;
cin>>n;

cout<<"enter the elements in the array"<<endl;

for(int i=0 ;i<n ;i++){
    cin>>arr[i];
}

int ans=selectionsort(arr , n);

cout<<"the sorted array is "<<endl;
for(int i=0 ;i<n ;i++){
    cout<<arr[i]<<"  ";

}cout<<endl;

    return 0;
}