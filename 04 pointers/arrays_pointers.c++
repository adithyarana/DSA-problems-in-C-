# include<iostream>
using namespace std;


//sum of the array function //
int getsum(int arr[] , int n){
    int sum=0;
     for(int i=0 ;i<n ;i++){
        sum=sum+arr[i];
     }
     return sum;
}

int main(){

int arr[5]={1,2,3, 4,5};

//we can add the number 
cout<<"the arr is "<<*arr+1<<endl;
cout<<"the arr is "<<*arr<<endl;

//keping the brackets we can installise the array numbers 
cout<<"the arr is "<<*(arr+1)<<endl;


cout<<"the arr is "<<arr[2]<<endl;

//another way to instiallize array
int i=2;
cout<<i[arr]<<endl;

cout<<"the size of arr is "<<sizeof(arr[0])<<endl;


cout<<"the sum of the array is "<<getsum(arr,5)<<endl;


    return 0;


}