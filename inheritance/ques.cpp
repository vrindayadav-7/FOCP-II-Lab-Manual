#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y)
    {
        brand = b;
        year = y;
    }
    void display1()
    {
        cout << "brand: " << brand << endl
             << "year: " << year << endl;
    }
};

class Car : Vehicle
{
protected:
    string model;
    int seatingCapacity;

public:
    Car(string b, int y, string m, int sc) : Vehicle(b, y) // to call the "with valued" constructor.
    {
        model = m;
        seatingCapacity = sc;
    }
    void display()
    {
        display1();
        cout << "model: " << model << endl
             << "seating capacity:" << seatingCapacity << endl;
    }
};

int main()
{
    Car c1("maruti", 2023, "Suzuki", 5);
    c1.display();
    return 0;
}