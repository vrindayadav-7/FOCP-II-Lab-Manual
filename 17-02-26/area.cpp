// area of triangle class

#include <iostream>
using namespace std;
// we put data and functions in class
class area
{
protected:
    int base, height;

public:
    float area;

    void data(int b, int h)
    {
        base = b;
        height = h;
    }
    void areaTri()
    {
        area = 0.5 * base * height;
        
    }
};

int main()
{
    area a1; // using class
    int b, h; // b is base and h is height
    cout<<"enter base of triangle: ";
    cin>>b;
    cout<<"enter height of triangle: ";
    cin>>h;

    a1.data(b, h); // will give value of base and height to data function(class)
    a1.areaTri(); 

    cout << "area of triangle is: " << a1.area << endl;
    return 0;
} 17
