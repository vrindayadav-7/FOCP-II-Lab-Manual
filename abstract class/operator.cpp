#include <iostream>
using namespace std;

class box{
    public:
    int weight;
    box(int w){
        weight=w;
    }
     box operator+(box b){
        return box(weight + b.weight);
    }

};
int main(){
    box b1(10);
    box b2(20);
    box b3=b1+b2;
    cout<<"b3 weight: "<<b3.weight<<endl;
    return 0;
}