#include <iostream>
using namespace std;

class A{
public:
void show(){
    cout<<"calling A"<<endl;
}
};
class B : public A{ 
};
class C : public A{ 
};
class D: public B, public C{ 
};

int main() {

cout<<"by B: ";
    B b;
    b.show();
cout<<"by D: ";
    D d;
    d.B::show();
    return 0;
}