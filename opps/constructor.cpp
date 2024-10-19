#include <iostream>
using namespace std;


class hero {
  
private:
int health;

public:
char level;

hero(){
   cout<<"dafault constructor called"<<endl;
}

// paramerterised constructor


hero(int health){
    this->health=health;  // this--> pointer holds the address of the current object...
}

hero(int health , char level){
    this->health =health;
    this-> level=level;
}

void print(){
    cout<<"health"<<this->health <<endl;
    cout<<"level"<<this->level<<endl;
}

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

hero adithya(50 , 'a');
adithya.print();

// copy construtor...

hero r(adithya);
r.print();


    return 0;
}