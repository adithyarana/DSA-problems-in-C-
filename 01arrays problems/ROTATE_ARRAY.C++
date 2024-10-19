#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    // Create a temporary array to store elements
    int temp[k];

    // Copy the last k elements to temp array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the remaining elements to make room for rotated ones
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy the elements from temp back to the original array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    // Example usage
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    // Rotate the array by k positions
    rotateArray(arr, n, k);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
