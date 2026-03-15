#include <iostream>
using namespace std;
// we put data and functions in class
class area
{
private:
    int base, height;
    int triarea;
    

public:
    area(int b, int h){ //constructor
        base=b;
        height=h;
        triarea= 0.5*b*h;
                cout<<"area of traingle is "<< triarea;
    }
};

int main()
{
     // using class
    area(40,20); // using constructor 


    return 0;
}
