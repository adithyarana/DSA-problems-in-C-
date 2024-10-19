# include<iostream>
using namespace std;

int cheakpalindrome(char a[] , int n){

    int s=0;
    int e=n-1;

    while(s<=e){

        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){

  char a[10] , n;

cout<<"enter the name "<<endl;
cin>>n;



cout<<"palindromw or not "<<cheakpalindrome(a,n)<<endl;



    return 0;
}