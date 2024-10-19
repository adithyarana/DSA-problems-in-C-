# include<iostream>
using namespace std;

// finding power 

int power(int n){


    //base case....
    if(n==0)
      return 1;

   // recursive relation 

   int smallerproblem=power(n-1);
   int biggerproblem=2*power(n-1);

   return biggerproblem;
   
    
}

int main(){


int n;

cout<<"enter the number "<<endl;
cin>>n;

int ans=power(n);

cout<<"the power is "<<ans<<endl;

    return 0;
}