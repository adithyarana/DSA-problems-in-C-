#include <iostream>
using namespace std;

// Reverse of the string using recursion
void reverse(string &str, int i, int j) {
    // Base case
    if (i > j)
        return;

    // Swap characters
    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverse(str, i, j);
}

int main() {
    string ch;

    cout << "Enter the character: ";
    cin >> ch;

    // Call the reverse function
    reverse(ch, 0, ch.length() - 1);

    // Output the reversed string
    cout << "The reverse of the string is: " << ch << endl;

    return 0;
}
