 #include <iostream>
using namespace std;

// fibonacci series  with the help of recursion program...................

int fibo(int n){


     //base case 
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }else{
        return fibo(n-1)+fibo(n-2);
    }
}


int  main(){

int n;

cout<<"enter the number "<<endl;
cin>>n;

cout<<"the serirs is "<<fibo(n)<<endl;


    return 0;
}