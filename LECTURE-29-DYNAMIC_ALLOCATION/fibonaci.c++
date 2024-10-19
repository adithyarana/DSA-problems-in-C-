# include <iostream>
using namespace std;


int fibonachi(int n ){

if(n==0){
    return 0;
}else if(n==1){
    return 1;
} else{
    
   return  fibonachi(n-1)+fibonachi(n-2);

}     

}


int main(){


int n;

cout<<"enter the number for the fibpnacci serise "<<endl;
cin>>n;

if(n<0){
    cout<<"invalid input plz correct the input "<<endl;
}

int ans=fibonachi(n);

cout<<"the series is "<<ans<<endl;

    return 0;
}