#include <iostream>
using namespace std;

// creatig the class 
// in the empty class the size is 1 byte<<-

// access modifires
// * public ----- in this we can access the data in side of class or outside od the class so public is used
// * private ------ in this we can only access the data in the class not outside of the class 
// * protected ----- 

// using getter and setter we can access the private any where

class hero {


private:
int health;

public:
char level;

int gethealth(){
    return health;
}

char getlevel(){
    return level;
}

void sethealth(int h){
    health=h;
}

void setlevel(char ch){
    level=ch;
}

};

int main(){

// // creating the object 
hero adithya;

adithya.sethealth(50);
adithya.level='a';

cout<<"the health of adithya is "<< adithya.gethealth()<<endl;



//cout<<"the size of"<<sizeof(h1)<<endl;

cout<<"the heath is"<<adithya.gethealth()<<endl;
cout<<"the level is "<<adithya.level<<endl;


// by static memory allocation 

hero a;

a.sethealth(80);
a.setlevel('a');

cout<<"the health is "<<a.gethealth()<<endl;
cout<<"the level is "<<a.getlevel()<<endl;

// by dynamic memory alllocation 

hero *b =new hero;
b->sethealth(20);
b->setlevel('o');

cout<<"the healht is"<<b->gethealth()<<endl;
cout<<"the level is "<<b->getlevel()<<endl;

    return 0;
}