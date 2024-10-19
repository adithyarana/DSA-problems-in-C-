# include <iostream>
using namespace std;


// Contains Duplicate problem 

bool  ContainsDuplicate(int arr[], int n){
  
int i=arr[0];
int j=arr[1];

for (int i=0 ;i<n ;i++){
    for(j=i+1;j<n ;j++){

        if(arr[i]==arr[j]){
            i++;
            j++;
            return true;
        }
    }
}
return false;

}


int main(){

int arr[10],n;

cout<<"enter the size if the array "<<endl;
cin>>n;

cout<<"enter the number in the array"<<n<<endl;

for(int i=0 ;i<n ;i++){
 cin>>arr[i];
}


int temp= ContainsDuplicate(arr,n);

if(temp){
    cout<<"contain dubilacte "<<endl;
}else{
    cout<<"not contain dubiclate "<<endl;
}
    return 0;
}