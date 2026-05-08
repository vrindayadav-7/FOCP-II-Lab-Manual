#include<iostream>
#include<string>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    public:
    Person(string n, int a){
        name = n;
        age = a;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};
class Student : public Person{
    private:
    int roll_no;
    int marks;
    public:
    Student(string n, int a, int r, int m) : Person(n, a){
        roll_no = r;
        marks = m;
    }
    void display1(){
        display();
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){
Student s1("Lily", 19, 105, 70);
    s1.display1();
    return 0;
}