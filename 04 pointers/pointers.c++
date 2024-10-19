# include<iostream>
using namespace std;

int main(){

/*
int num=5;

//to create a pointer
int *ptr=&num;

cout<<"before"<<num<<endl;
(*ptr)++;
cout<<"after "<<num<<endl;

cout<<"the address is "<<ptr<<endl;

cout<<"the value is "<<*ptr<<endl;

cout<<"the size of integer is "<<sizeof(num)<<endl;
cout<<"the size of integer is "<<sizeof(ptr)<<endl;

*/

//coping the pointer program 

/*
int num=5;

int *p=&num;

cout<<"the pointer is"<<*p<<endl;

int *q=p;
cout<<p<<"_ "<<q<<endl;
cout<<*p<<"_ "<<*q<<endl;
*/

// float f=10.5;
// float p= 2.5;
// float *ptr=&f;
// (*ptr)++;
// *ptr=p;
// cout<<*ptr<<" "<<f<<" "<<p<<endl;

int a=7;
int *c=&a;
c=c+3;
cout<<c<<endl;