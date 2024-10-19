#include <iostream>
using namespace std;

// merge sort using recursion

void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1]; 
    int *second = new int[len2]; 

    // copy the values in the array

    int k = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[k];
        k++;
    }
    k = mid + 1; 
    for (int i = 0; i < len2; i++) {
        second[i] = arr[k];
        k++;
    }

    // merge two sorted arrays (same algorithm as merging two arrays)
    int i = 0, j = 0;
    k = s; 

    while (i < len1 && j < len2) {
        if (first[i] < second[j]) {
            arr[k] = first[i];
            k++;
            i++;
        } else {
            arr[k] = second[j];
            k++;
            j++;
        }
    }

    // copy the remaining elements of the first array
    while (i < len1) {
        arr[k] = first[i];
        k++;
        i++;
    }

    // copy the remaining elements of the second array
    while (j < len2) {
        arr[k] = second[j];
        k++;
        j++;
    }

    delete[] first; // Fix: Deallocate dynamic memory
    delete[] second; // Fix: Deallocate dynamic memory
}

void mergesort(int arr[], int s, int e) {

    // base case
    if (s >= e) {
        return;
    }
    int mid = (s + e) / 2;

    // left side ko sort karo
    mergesort(arr, s, mid);

    // right side ko sort karo
    mergesort(arr, mid + 1, e);

    // merge the both arrays
    merge(arr, s, e);
}

int main() {

    int arr[10] = {2, 3, 6, 7, 8, 9, 4, 3, 2, 3};
    int n = 10;

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }cout<<endl;

    return 0;
}
