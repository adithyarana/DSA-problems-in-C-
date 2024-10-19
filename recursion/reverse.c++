#include <iostream>
using namespace std;



int reverse(int n){
   

    //base case 
    if(n==0){
        return 0;
    }
    else{
     
     // recursive relation
     
     cout<<n%10;
     reverse(n/10);
    }
    
}

int main(){

int n;
cout<<"enter  the number for reverse the number "<<endl;
cin>>n;

cout<<"the reverse of the numbers is "<<endl;
  reverse(n);





    return 0;
}