# include<iostream>
using namespace std;

bool prime(int n){

    for(int i=2 ;i<n ;i++){

        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){


int n;

cout<<"enter the number "<<endl;
cin>>n;

if(prime(n)){
    cout<<"prime"<<endl;
}else{
  cout<<"not prime"<<endl;
}


    return 0;
}
