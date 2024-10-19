# include<iostream>
using namespace std;

// this is a progrmam for the array to cheak if array is sorted or not .. by the recursion 

bool sortedarray(int arr[] , int n){
       
       //base case
    if(n==0 || n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;

    }else{
        bool remaingpart=sortedarray(arr+1 , n-1);
    }
}

int main(){

int arr[10] , n;

cout<<"enter the aize of the array"<<endl;
cin>>n;

cout<<"enter the elements in the array"<<endl;

for(int i=0 ;i<n ;i++){

    cin>>arr[i];
}

int ans=sortedarray(arr , n);

if(ans){

    cout<<"the array is sorted "<<endl;
}else{

    cout<<"the array is not sorted"<<endl;
}

    return 0;
}