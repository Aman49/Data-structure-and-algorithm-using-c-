#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Enter month" << endl;
    cin >> month;
    if (month == 1)
        cout << "January";
    else if (month == 2)
        cout << "febrary";
    else
        cout << "It is an month except january and febrary" << endl;
    return 0;
}