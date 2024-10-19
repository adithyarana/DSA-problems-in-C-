# include<iostream>
using namespace std;

//Reverse the Array

int reversearray(int arr[], int n){

    int i=0;
    int j=n-1;
    int temp;

    for(int i=0 ;i<n ;i++){

     while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;

    }
    }
    
}

int main(){

int arr[10], n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements in the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    reversearray(arr, n);

    cout << "Reversed array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}