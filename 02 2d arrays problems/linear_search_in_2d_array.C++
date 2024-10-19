# include<iostream>
using namespace std;

//linear search in the 2d array ;

int  linearsearch(int arr[][4] ,int search , int n , int m){
 
 for(int i=0 ;i<3 ;i++){
    for(int j=0 ;j<4;j++){
        if(arr[i][j]==search){
            return 1;
        }

    }
}
return 0;




} 

int main (){

int arr[3][4];
int search;




cout<<"enter the elements"<<endl;
// taking input method 
for(int i=0 ;i<3 ;i++){
    for(int j=0 ;j<4;j++){
        cin>>arr[i][j];
    }
}

//printing the array
for(int i=0 ;i<3 ;i++){
    for(int j=0 ;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


cout<<"enter the element to search in the 2d array"<<endl;
cin>>search;

int found=linearsearch(arr,search,3,4);

if(found){
    cout<<"elelment is there"<<endl;
}else{
    cout<<"elelemnt is not there "<<endl;
}



    return 0;
}