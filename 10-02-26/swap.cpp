#include<iostream>
using namespace std;
void swap(int &x, int &y)
 {
 cout<<"x and y before swapping: "<<x<<y;
 int temp=x;
 x=y;
 y=temp;
 cout<<"x and y after swapping: "<<x<<y;
 } 
int main(){
int num1,num2;
cout<<"Provide two values: "<<endl;
cin>>num1>>num2;
cout<<"\nValues of num1 and num2 before function call: "<<num1<<num2;
swap(num1,num2);
cout<<"\nValues of num1 and num2 after function call: "<<num1<<num2;
return 0;
}