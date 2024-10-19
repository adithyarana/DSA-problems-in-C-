# include<iostream>
using namespace std;
# include<stack>
# include<vector>

// function to print the next smaller element


vector<int> nextSmallerElement(vector<int> &arr , int n){

stack<int> s;

s.push(-1);
vector<int> ans(n);

for(int i=n-1 ; i>=0 ; i--){

 int curr= arr[i];
    while(s.top() >= curr){
     
     s.pop();
    }

    ans[i]=s.top();
    s.push(curr);
}
return ans;

}


int main(){


    vector<int> arr = {2, 1, 4, 3}; // Initialize a vector with the elements
    cout << "The next smaller elements are: " << endl;

    vector<int> result = nextSmallerElement(arr, arr.size());

    // Print the result
    for (int i : result) {
        cout << i << " ";
    }
    
    cout << endl;
    


    return 0;

}