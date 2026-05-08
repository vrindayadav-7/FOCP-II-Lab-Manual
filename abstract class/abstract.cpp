#include <iostream>
using namespace std;

class Animal{
public:
virtual void sound()=0; 
};


class Dog:public Animal{
public:
void sound(){
    cout<<"dog Bark"<<endl;
}
};
class Cat:public Animal{
public:
void sound(){
    cout<<"cat Meow"<<endl;
}
};

int main(){
    Dog d;
    d.sound();
    Cat c;
    c.sound();
    return 0;
}