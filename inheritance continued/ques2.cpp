#include<iostream>
#include<string>
using namespace std;

class Employee{
    protected:
    string name;
    int Emp_id;
public:
Employee(string n, int id){
    name =n;
    Emp_id=id;
}
void display1(){
    cout<<"Name: "<<name<<endl;
    cout<<"Emp_id: "<<Emp_id<<endl;
}
};
class Manager : public Employee{
public:
int salary;
int bonus;

Manager(string n, int id, int s, int b) : Employee(n, id){
    salary=s;
    bonus=b;
}
void display(){
    display1();
    cout<<"Salary: "<<salary<<endl;
    cout<<"Bonus: "<<bonus<<endl;
}
};

int main(){
    Manager m1("rizz", 456, 50000, 5000);
    m1.display();
    return 0;
}