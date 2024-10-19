#include <iostream>
using namespace std;

// inherantance  in this case with the private modifier we cannort access the data in inheritance it will show error
// learn the table for it in coding ninjas 

// types of inherentance
// 1-> single
//2=> multi level
//3-> multiple
//4-> hybride
//5-> herechical

class human{
     
    public:
    int height;
    int weight;
    int age;

    public:
    int getage(){
        return this-> age;
    }

    void setweight(int w){
        this->weight=w;
    }
};

class male : public human{

    public :
    string color;

    void sleep(){
        cout<<"male slepping "<<endl;
    }
};


int main(){

male object;

object.setweight(12); // setting the weight using setter 
cout<<object.age<<endl;
cout<<object.weight<<endl;
cout<<object.height<<endl;

object.sleep();



    return 0;
}