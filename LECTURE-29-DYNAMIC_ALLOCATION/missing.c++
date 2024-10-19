#include <iostream>

int findMissingNumber(int arr[], int size) {
    // Calculate the expected sum of consecutive integers
    int expectedSum = (size + 1) * (size + 2) / 2;

    // Calculate the actual sum of the elements in the array
    int actualSum = 0;
    for (int i = 0; i < size; ++i) {
        actualSum += arr[i];
    }

    // The difference between the expected sum and actual sum is the missing number
    int missingNumber = expectedSum - actualSum;

    return missingNumber;
}

int main() {
    // Example array with one missing number
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find the missing number
    int missingNumber = findMissingNumber(arr, size);

    // Display the result
    std::cout << "Missing number in the array: " << missingNumber << std::endl;

    return 0;
}
