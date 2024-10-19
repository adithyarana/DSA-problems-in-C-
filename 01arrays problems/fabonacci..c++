# include <iostream>
using namespace std;

int fabnonacci(int n , int count=0){

for(int i=0; i<n ;i++){
  
  if(n==1){
    return 0;
  }
  if(n==2){
    return 1;
  }
  else{
    
    count++;
  }

}

}


int main(){

int n ;

cout<<"enter the number how much to print the series "<<endl;
cin>>n;

 int ans = fabnonacci( n);

cout<<"the series is "<<endl;

for(int i=0 ;i<n ;i++){
   
   cout<<ans<<endl;
}

    return 0;
}