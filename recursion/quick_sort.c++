#include <iostream>
using namespace std;

// quick sort using recursion 
// in the quick sort we should do the partition so that we can sort the array

int partition(int arr[] , int s , int e){

    int pivot=arr[s];

    int count=0;

    for (int  i = 0; i <=e; i++)
    {
        if(arr[i]<=pivot){
            count++;
        }
    }

    //palce pivot element in the right place in the array...

    int pivotindex=s+count;
    swap(arr[pivotindex] , arr[s]);
    

    //left and right part ko sambal loo

    int i=s, j=e;

    while (i<pivotindex && j>pivotindex)        
    {
        while(arr[i] < pivot)
        {
            i++;
        }
       while(arr[j]> pivot)
       {
            j--;
       }

       if(i<pivotindex && j> pivotindex){
        swap(arr[i++] , arr[j--]);
       }

    }
    return pivotindex;
}

int  quicksort(int arr[] , int s , int e ){
 

   //base case
   if(s>=e){
    return 0;
   }

     //partition karo
    
    int p=partition(arr , s,e);

    //left part sort karo
    quicksort(arr, s ,p-1);

    //right part ko sort karo

    quicksort(arr , p+1 , e);

}

int main(){


int arr[10]={3,5,4,6,7,8,5,4,7,4};
int n=10;

quicksort(arr , 0 , n-1);

cout<<"the sorted array is "<<endl;

for(int i=0 ;i<n ;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

    return 0;
}