# include <iostream>
# include<vector>
using namespace std;

int merge(int arr1[] , int n, int arr2[], int m , int arr3[]){

    int i=0 , j=0;
    int k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }

    //copy the first element 

     while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
     }

     //copy the seconf element 

     
     while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
     }
}

   void printarray(int ans[] , int n){

        for(int i=0 ;i<n ;i++){
            cout<<ans[i]<<" ";

        }
        cout<<endl;
     }


int main(){

int arr1[5]={1,3 ,5,7,9};
int arr2[4]={2,4,6,8};
int arr3[9]={0};

//calling the function

merge(arr1 , 5 , arr2 , 4 , arr3);

printarray(arr3 , 9);

    return 0;
}