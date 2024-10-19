# include <iostream>
# include<vector>
using namespace std;



int nonzero(int arr[] , int n){

    int i=0;
  

    for(int j=0 ;j<n ; j++){
         if (arr[j]!=0){
            swap(arr[j] , arr[i]);
            i++;

         }
    }
}

int main(){

int arr[10] , n;

cout<<"enter the size of the array "<<endl;
cin>>n;

cout<<"enter the element in thr array  is "<<endl;

for(int j=0 ;j<n ;j++){

    cout<<arr[j]<<endl; 
}

// calling  the function

nonzero(arr , n);

cout<<"the nonzeor element are "<<endl;

for( int j=0 ;j<n ;j++){
    cout<<arr[j]<<" ";
}
cout<<endl;

    return 0;
}