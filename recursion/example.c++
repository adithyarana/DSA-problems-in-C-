#include <iostream>
using namespace std;

void reachhome(int src , int dest){

  
  cout<<"src is "<<" " <<src <<" "<<"distinatoin is"<<" " <<dest<<endl;
  // base case print 
    if(src==dest){
        cout<<"poch gaya"<<endl;
         return ;
    }
     
     // processing  the function 

     src++;

     //recursive call;
     reachhome(src , dest);
      
}

int main(){


int dest=10;
int src=1;

cout<<endl;

reachhome(src ,dest);

    return 0;
}