# include<iostream>
using namespace std;



//by the reference value we are calling the funnction and it will not copy the the value

int update2(int &n){
    n++;
}


//pass by value function in this the value will be  pass the copy 
int update(int n){
    n++;
}

int main(){

//reference variable create 

int n=5;

int &j=n;  //reference variable create 

// cout<<n<<endl;
// n++;
// cout<<n<<endl;
// n++;
// cout<<n<<endl;

cout<<"before"<<n<<endl;

update(n);

cout<<"after"<<n<<endl;

//by the reference value we are calling the funnction 

cout<<"before"<<n<<endl;

update2(n);

cout<<"after"<<n<<endl;

// int arr[n];
// cout<<"enter the array size"<<endl;
// cin>>n;
    return 0;
}