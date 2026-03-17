#include <iostream>
using namespace std;

class CarRental {
private:
    double dailyRate;
    int days;
    double totalCost;

public:
    
    CarRental(double dailyRate) {
        dailyRate = dailyRate;
        days = 1;
        totalCost = dailyRate * days;
    }

    CarRental(double dailyRate, int days) {
        dailyRate = dailyRate;
        days = days;
        totalCost = dailyRate * days;
    }

    CarRental(double dailyRate, int days, double taxRate) {
        dailyRate = dailyRate;
        days = days;
        double totalCost = dailyRate * days;
        double taxAmount = totalCost * (taxRate / 100);
        double totalAmount = totalCost + taxAmount;
    }
void display() {
        cout << "Daily Rate: " << dailyRate << endl;
        cout << "Number of Days: " << days << endl;
        cout << "Total Rental Cost: " << totalCost << endl;
    }
    
};

int main(){
   CarRental r;
   double rate = 50.0;
    cout << "One day rental cost: "
        << CarRental(50.0) << endl;

    cout << "Multiple days rental cost (50/day for 5 days): "
         <<CarRental(50.0, 5) << endl;

    cout << "Rental cost with tax (50/day for 5 days, 10% tax): "
         << r.CarRental(50.0, 5, 10.0) << endl;
        
        return 0;
        }