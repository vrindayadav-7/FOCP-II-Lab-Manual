//Solution to accept marks of 3 students and compute their average.

#include<iostream>
using namespace std;

int main(){
float marks1, marks2, marks3, avg;

cout <<"Enter Marks of 3 students: ";
cin>>marks1>>marks2>>marks3;

avg = (marks1+ marks2+ marks3)/3;
cout<<"avg marks of three students: "<<avg<<endl;

return 0;
}