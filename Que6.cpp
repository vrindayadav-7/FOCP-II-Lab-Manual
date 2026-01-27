//Date- 27-01-2026
//Solution to accept the number of employees and their basic salary and compute bonus and net salary.

#include <iostream>
using namespace std;

int main() {
    int n;
    double basicSalary, bonus, netSalary;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nEnter basic salary of employee " << i << ": ";
        cin >> basicSalary;

        bonus = basicSalary * 0.12;   // 12% bonus
        netSalary = basicSalary + bonus;

        cout << "Bonus (12%): " << bonus << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
    return 0;
}
