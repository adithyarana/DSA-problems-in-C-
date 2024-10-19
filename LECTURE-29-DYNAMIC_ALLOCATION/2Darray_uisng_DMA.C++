# include <iostream>
using namespace std;


int main(){

int n;
cout<<"enter the size "<<endl;
cin>>n;

//creating the 2d array using dynamic memory alloaction

int** arr = new int*[n];

for(int i=0 ;i<n ;i++){
    arr[i]=new int[n];
}

//taking the inpput for the 2d aarray 

for(int i=0 ;i<n ;i++){
    for(int j=0 ;j<n ;j++){
        cin>>arr[i][j];
    }
}


// taking the output 

for(int i=0 ;i<n ;i++){
    for(int j=0 ;j<n ;j++){
      cout<<arr[i][j]<<" ";
    }cout<<endl;
}



    return 0;

}