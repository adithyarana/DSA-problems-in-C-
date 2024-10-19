# include<iostream>
using namespace std;


//--> there are four pillers of opps 

// 1-> encapsulation  --> this is for information hiding / data hideingwhich this security will increase and we can make class read only 
// it is for unit testing



class student{
 private:
   string name ;
   int age;
   int height;

   public:
   int getage(){
    return this->age;
   }



};

int main(){

student adithya;





    return 0;
}