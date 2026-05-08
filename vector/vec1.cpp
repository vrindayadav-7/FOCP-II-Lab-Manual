#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()

{
    // adding elements to vector
    vector<int> v;
    v.push_back(9);
    v.push_back(2);
    v.push_back(38);
    v.push_back(4);
    v.push_back(5);

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // sorting
    //  arranges in ascending order
    sort(v.begin(), v.end());
    // printing elements of vector
    cout << "after sorting: " << endl;
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // removing last element of vector
    v.pop_back();
    // printing elements of vector
    cout << "after pop back: " << endl;
    for (int x : v)
    {
        cout << x << " ";
    }
}