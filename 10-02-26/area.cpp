#include<iostream>
using namespace std;

int area(int x, int y)//when no value of width is provided in result, provide default value here.
{
    return x*y;
}
int main(){
int length,width;
cout<<"Provide Length: ";
cin>>length;
cout<<"Provide Width: ";
cin>>width;
int result = area(length, width);
cout<<"Area: "<<result;

return 0;
}
