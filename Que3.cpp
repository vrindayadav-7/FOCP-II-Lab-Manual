//Solution to convert farhenheit temperature into centigrade or vice versa

#include<iostream>
using namespace std;

int main(){
float temp, c,f, choice;

cout <<"Temperature Converter\n";
cout <<"1. Celsius to Farhenheit\n";
cout <<"2. Farhenheit to Celsius\n";
cin>>choice;

if(choice==1){
  cout<<"Temperature in Celsius: ";
  cin>>c;
  f = (9.0/5.0)*c+32;
  cout<<"Temperature in Farhenheit: "<<f<<endl;
}
  else if(choice==2){
   cout<<"Temperature in Farhenheit: ";
  cin>>f;
  c = (5.0/9.0)*f-32;
  cout<<"Temperature in celsius: "<<c<<endl;
  }
  else{
    cout<<"Invalid Choice!"<<endl;
  }

    return 0;
}