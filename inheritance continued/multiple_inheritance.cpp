#include <iostream>
using namespace std;
class A
{
public:
    int x = 4;
    A()
    {
        cout << "x= " << x << endl;
    }
};

class B
{
public:
    int y;
    B()
    {
        cout << "y: " << y << endl;
    }
};
class Clash_ : public A, public B
{
    public:
    Clash_()
    {
        cout << "HAHA!" << endl;
    }
};

int main()
{
    Clash_ obj();
    return 0;
}