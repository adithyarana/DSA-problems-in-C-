# include<iostream>
using namespace std;

void sumprint(int arr[][3] , int n , int m){

cout<<"printing the sum"<<endl;


for(int i=0 ;i<3;i++){
    int sum=0;

    for(int j=0 ;j<3;j++){
        sum+=arr[i][j];
    }
    cout<<sum<<" ";
}
cout<<endl;


}


int main(){
int arr[3][3];


cout<<"enter the elements"<<endl;
// taking input method 
for(int i=0 ;i<3 ;i++){
    for(int j=0 ;j<3;j++){
        cin>>arr[i][j];
    }
}

//printing the array
for(int i=0 ;i<3 ;i++){
    for(int j=0 ;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

//calling  the function 

sumprint(arr ,3, 3);



    return 0;
}