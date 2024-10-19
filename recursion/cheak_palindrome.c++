#include <iostream>
using namespace std;

//cheak the palindroem using recursion 

bool palindrome(string str , int i , int j){

    //base case 
    if (i > j)
        return true ;

     if(str[i]!=str[j]){
        return false;
     }else{

        return palindrome(str ,i+1, j-1);
     }
}

int main(){

string ch;

cout<<"enter the string"<<endl;
cin>>ch;

bool ans=palindrome(ch , 0 , ch.length()-1);

if(ans){
    cout<<"the string is palindroem"<<endl;
}else{
    cout<<"the string is not palindrome"<<endl;
}

    return 0;
}