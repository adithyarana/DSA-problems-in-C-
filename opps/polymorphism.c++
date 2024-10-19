#include <iostream>
using namespace std;


// polymorphism->> (means) many forms 

// if i want to crete same function i have to change the function argument otherwise it will show the error

// therw are two types of  polymorphism 

//1-> run time polymorphism (this is also called dynamic poly) in this we should chanage function name , function argument , inherentance 
//2-> compile time polymorphism (it is also called static poly)
class A{

// compile time polymorphism 
public:
 void sayhello(){
    cout<<"hello adithya"<<endl;

 }  

  void sayhello(string name){
    cout<<"hello adithya"<<name<<endl;
    
 }  

};

// run time polymorphism 
class animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }

};

class dog:public animal{
        public:
        void speak(){
            cout<<"barking"<<endl;
        }
    };





int main(){

dog obj;
obj.speak();

A object;
object.sayhello();

    return 0;
}