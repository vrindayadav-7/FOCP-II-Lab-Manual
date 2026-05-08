#include <iostream>
using namespace std;

//base class(parent) 
class animal{
    public:
        void eat(){
            cout << "animals are eating" << endl;
        }
        animal(){
            cout << "animal constructor called" << endl;
            eat();
        }
};

//derived class(child) 
class dog: public animal{
    public:
        void bark(){
            cout << "dog is barking" << endl;
        }
        dog(){
            cout << "dog constructor called" << endl;
        }
};

int main()
{
    dog d; //object of derived class

    // hirearchy will be followed i.e. constructor will be called in parent class first and then in child class constructor.
    d.bark();
    return 0;
}

