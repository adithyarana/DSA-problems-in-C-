# include<iostream>
using namespace std;

// kth largest element in the array 

int largestelement(int arr[],int n, int &max, int &min){

  for(int i=0 ;i<n ;i++){
      if (arr[i]>max){
        max=arr[i];
      }
      
        if(arr[i]<min){
            min=arr[i];
        
      }
  }

}

int main(){

int arr[10], max=INT16_MIN, min=INT16_MAX,n;

cout<<"enter the sizw of the array"<<endl;
cin>>n;

cout<<"enter the element in the array"<<n<<endl;

for(int i=0 ;i<n ;i++){
    cin>>arr[i];
}

// calling the function 

largestelement(arr,n,max,min);

cout<<"thr largest element in the array is "<<max<<endl;
cout<<"the samllest element in the array is "<<min<<endl;


    return 0;
}