# include<iostream>
using namespace std;

// find search in rotated sorted array uisng bs

int searchtarget(int arr[], int n , int target){

    int start=0;
    int end=n-1;

    while(start<=end){

        int mid=(start+end)/2;

       if(arr[mid]==target){
        return mid;
       }

       if(arr[start]<=arr[mid]){

        if(arr[start]<=target && target<=arr[mid]){

            end=mid-1;
        }else{
            start=mid+1;
        }

       }
       else{
        if(arr[mid]<=target && target<=arr[end]){
            start=mid+1;

        }else{
            end=mid-1;
        }
       }
        
  
    }
    return -1;
   
}




int main(){

int arr[10], n, target;

cout<<"enter the size of the array"<<endl;
cin>>n;

cout<<"enter the numbers in the array "<<n<<endl;

for(int i=0 ;i<n ;i++){
    cin>>arr[i];
}

cout<<"ENTER THE elements to search the elelemnts should br in the array "<<endl;
cin>>target;

int index=searchtarget(arr,n ,target);

cout<<"the target in the index of"<<" " <<index<<endl;



    return 0;
}