#include<iostream>
using namespace std;

class base{
    public:
    base(int x){
        cout<<"base constuctor called: "<<x<< endl;
    }
};
class base2{
    public:
    int x;
    base2(int y){
        cout<<"base2 constructor called: "<<x<< endl;
    }
};
class derived : public base, public base2{
public:
derived(int a, int b, int x, int y): base(x), base2(y){
    cout<<"derived constructor called: "<<a<<"  "<<b<<endl;
}
};
int main(){
    derived d(1,1+2, 3+4, 9);
    return 0;
}