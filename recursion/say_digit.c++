#include <iostream>
using namespace std;

//say digits program using the recursion function 

void saydigit(int n , string arr[]){
     
     // base case 
    if(n==0)
       return ;

       //processing 

       int digit=n%10;
       n=n/10;


       //recursive call

       saydigit(n ,arr);

       cout<<arr[digit]<< " ";
}

int main(){

string arr[10]={ "zero " ,"one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"  };

int n;


cout<<"enter the digit "<<endl;
cin>>n;


cout<<"the digits in number  is "<<endl;
saydigit(n ,arr);

    return 0;
}