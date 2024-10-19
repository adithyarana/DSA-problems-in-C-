# include<iostream>
using namespace std;

int sumofarray(int arr[] , int n){

// base case

if(n==0){
    return 0;
}

if(n==1){
    return arr[0];
}
       
     return arr[0]+ sumofarray(arr+1 , n-1); 
    
}





int main(){

int arr[10] ,n;

cout<<"enter the size of the array"<<endl;
cin>>n;

cout<<"enter the elelemnts in the array "<<endl;

for(int i=0 ;i<n ;i++){

    cin>>arr[i];
}

int ans= sumofarray(arr , n);

cout<<"the sum of the array is "<<ans<<endl;
    return 0;
}