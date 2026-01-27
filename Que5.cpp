//Date- 27/01/2026
//Solution to swap numbers

#include<iostream>
using namespace std;

int main(){
int a, temp, b;

cout<< "Enter two numbers";
cin>>a>>b;
cout <<"Before swap: a = "<< a << ", b= \n" <<b ;
temp = a;
a = b;
b = temp;
cout <<"\nAfter swap: a = "<< a << ", b= "<<b;

    return 0;

}
