#include<iostream>
using namespace std;

inline int add(int x, int y){
    return x+y;
}

int main(){
int x, y;
cout<<"Provide 2 Integers: ";
cin>>x>>y;
int result = add(x,y);
cout<<"Sum of the provided integers: "<<result<<endl;
return 0;
}
