# include<iostream>
using namespace std;

//binary search usiong recursion

bool binarysearch( int arr[] , int s ,int e ,int n){
     
     // base case
     
     //element not find
    if(s>e){
        return false;
    }

    int mid = s+(e-s)/2;
     
     // element is found 
    if(arr[mid]==n){
        return true;
    }

    // if(arr[mid]<n){
    //     return binarysearch(arr , mid+1 , s , n);
    // }else{
    //     return binarysearch(arr ,e,  mid-1 , n);
    // }

    if(arr[mid]<n){
        return binarysearch(arr , s, mid-1 , n);
    }
    else{
        return binarysearch(arr , mid+1 , e , n);
    }
}

int main(){


int arr[5]={ 2,4,6,8,9};

int size=5;
int n=9;

cout<<"present or not"<<binarysearch(arr ,0 , 5 , 9);



    return 0;
}