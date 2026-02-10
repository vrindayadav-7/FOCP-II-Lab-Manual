#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    float percentage;

    cout << "Enter marks for 5 subjects:\n";
    
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    percentage = (total / 500.0) * 100;

    cout << "\nTotal Marks = " << total;
    cout << "\nPercentage = " << percentage << "%";

    if (percentage >= 30)
        cout << "\nResult: PASS";
    else
        cout << "\nResult: FAIL";

    return 0;
}