# include<iostream>
# include<algorithm>
# include<vector>

using namespace std;


int main(){
vector<int>arr={3,2,1};

next_permutation(arr.begin(),arr.end());
minmax_element(arr.begin(),arr.end());

for(int num:arr){
    cout<<num<<" " ;
}cout<<endl;



    return 0;
}