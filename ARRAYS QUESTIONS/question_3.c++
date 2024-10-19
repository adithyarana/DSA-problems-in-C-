# include <iostream>
# include<vector>
using namespace std;

// maximun subarray problem using the kadans algo...


int maxsubarray(vector<int>&nums){

    int maxsum=INT8_MIN;
    int currsum=0;

    for(int i=0 ;i<nums.size();i++){

        currsum=max(currsum+nums[i], nums[i]);

        maxsum=max(maxsum,currsum);

        
    }
    return maxsum;
    
}


int main(){


vector<int> nums(10);

cout<<"enter the array numbers"<<endl;

for(int i=0 ;i<10 ; i++){
    cin>>nums[i];
}


int temp=maxsubarray(nums);

cout<<"the max sub array sum is "<<temp<<endl;


    return 0;
}