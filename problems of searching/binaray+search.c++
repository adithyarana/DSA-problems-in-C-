# include <iostream>
using namespace std;

int binarysearch(int arr[] ,int n , int search){

    int start=0;
    int end=n-1;



    while(start<=end){

        int mid=(start+end)/2;

        if(arr[mid]==search){
            return mid;
        }

        // go to right section 

        if(arr[mid]<search){
            start=mid+1;
        }
        else{//go to left section 
            end=mid-1;
        }
        // mid= start +(end-start)/2;
    }
    return -1;


}


int main(){

int arr[100],n , search;

cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
cin>>n;

if(n>100){
    cout<<"invalid input plz enetr the size od the correct array "<<endl;
}

cout<<"enter the elelemnts in the array "<<n<<endl;

for(int i=0 ;i<n ; i++){
    cin>>arr[i];
}
cout<<"ENTER THE elements to search the elelemnts should br in the array "<<endl;
cin>>search;


//calling the funtion 

 int index= binarysearch(arr,n,search);

cout<<"the index is this elelments is  "<<index<<endl;


    return 0;
}