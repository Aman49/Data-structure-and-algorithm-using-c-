#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Jan";
        break;
    case 2:
        cout << "Feb";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;

    default:
        cout << "Not starting 4 months" << endl;
        break;
    }
}