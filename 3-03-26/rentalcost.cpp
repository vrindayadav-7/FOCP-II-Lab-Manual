#include<iostream>
using namespace std;

    class RentalCost{

private:
    double dailyRate;
    int days;
    double taxRate;

public:

    double computeRentalCost(double dailyRate) {
        return dailyRate;
    }

    double computeRentalCost(double dailyRate, int days) {
        double total = dailyRate*days;
        return dailyRate*days;
    }

    double computeRentalCost(double dailyRate, int days, double taxRate) {
        double total = dailyRate*days;
        double taxAmount = total * (taxRate / 100);
        return total + taxAmount;
    }
};

int main(){
RentalCost rental;

    cout << "One day rental cost: "
         << rental.computeRentalCost(50.0) << endl;

    cout << "Multiple days rental cost (50/day for 5 days): "
         << rental.computeRentalCost(50.0, 5) << endl;

    cout << "Rental cost with tax (50/day for 5 days, 10% tax): "
         << rental.computeRentalCost(50.0, 5, 10.0) << endl;

    return 0;
}
