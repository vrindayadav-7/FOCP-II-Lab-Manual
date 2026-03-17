//Banking Transaction System
//acc holder name, ini balance, reward pts
//parameterised constructor
//2 mem func inside the class
//access specifiers
#include<iostream>
using namespace std;

int main(){
    class BankAccount{
        private:
       string Acc_holder;
       double balance;
       int rewardPoints;

       public:
      BankAccount(string Name, double InitialBalance, int Points){
        Acc_holder = Name;
        balance = InitialBalance;
        rewardPoints = Points;
    }
 void withdraw(){
 balance -= 500;
 rewardPoints -= 20; 
}
 void displayAcc(){
    cout<<"Name of the Holder: ";
    cin>>Acc_holder;

    cout<<"Account Balance: ";
    cin>>balance;

    cout<<"RewardPoints: ";
    cin>>rewardPoints; 
 }
 l



    int main(){
    BankAccount account("Vrinda")


    }





}