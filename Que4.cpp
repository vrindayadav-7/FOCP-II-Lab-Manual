//Date- 27-01-2026
//Implement a solution to compute bill amount after applying 20% discount.

#include<iostream>
using namespace std;

int main(){
double item_num, quantity, unit_price, discount;

cout <<"item number: ";
cin>> item_num;
cout <<"Quantity: ";
cin>>quantity;
cout <<"Unit Price: ";
cin>> unit_price;

discount = (quantity*unit_price)*0.2;

cout <<"Bill amount: "<<(quantity*unit_price)-discount;

    return 0;

}
