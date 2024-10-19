# include<iostream>
using namespace std;

// to reverse the string 

int reversestring(char name[10] , int n){

    int s=0;
    int e=n-1;
    while(s<=e){
        swap(name[s++] , name[e--]);

        
    }
}

// to find the lenght of the function

int getlenght(char name[]){

    int count=0;
    for(int i=0 ;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){

char name[10]  ;

cout<<"enter the name"<<endl;
cin>>name;
// name[2]='\0'; // null character it will stop the string 


cout<<"your name is ";
cout<<name<<endl;

int len=getlenght(name);
cout<<"lenght : "<<len<<endl;


reversestring(name, len);

cout<<"the reverse is "<<endl;
cout<<name<<endl;



    return 0;
}