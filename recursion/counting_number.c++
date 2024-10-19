#include <iostream>
using namespace std;

// countinf the numbres .....

int print(int n)
{

    // base case.
    if (n == 0)
    {
        return 0;
    }

    cout << n << endl;
    cout << endl;

    print(n - 1);

    cout<<endl; 
    cout << n << endl;
}

int main()
{

    int n;
    cin >> n;

    cout << endl;
    print(n);

    return 0;
}