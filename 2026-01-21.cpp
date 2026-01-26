//Code to calculate and get grade according to the marks(out of 100) entered.

#include <iostream>
using namespace std; // container to contain all names in c++, the fixed ones.

int main(){
    int marks;
    cout <<"Enter Marks:"; // printf
    cin >> marks; //scanf
    
    while(marks <0 || marks >100){
        cout <<"Invalid Marks";
        cout <<"Re-enter marks:";
        cin >> marks;
         break;
    }
    
    switch(marks/10){

        case 10:
        cout <<"Grade = A+\n";
        break;

       case 9:
       cout <<"Grade = A\n";
        break;

       case 8:
       cout <<"Grade = B+\n";
        break;

       case 7: 
       cout <<"Grade = B\n";
        break;
       
       case 6:
        cout <<"Grade = C\n";
        break;

       case 5:
       cout <<"Grade = D\n";
        break;

       default:
        cout <<"Fail\n";
       }
    


return 0;
}
