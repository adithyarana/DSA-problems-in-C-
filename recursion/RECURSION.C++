# include<iostream>
using namespace std;

// factorial program .........

int factorial(int n){

    if(n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}


int main (){

int n;

cout<<"enter the number "<<endl;
cin>>n;

if(n<0){
    cout<<"invalid input"<<endl;
}

int ans= factorial(n);

cout<<"the factorial is "<<ans<<endl;


   return 0;
}
