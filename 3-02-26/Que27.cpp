#include<iostream>
using namespace std;
int main(){
float price[10];
float maximum_price = 0;

cout <<"Enter price of 10 items: \n";

int i;
for(int i=0; i < 10; i++ ){
cin >> price[i];
maximum_price += price[i];
}

cout << "\nMaximum Price of 10 items: "<< maximum_price<< endl;

    return 0;
}