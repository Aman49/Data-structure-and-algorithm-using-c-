#include <iostream>
using namespace std;

int main()
{
    int n, i = 2;
    cin >> n;
    while (i < n)
    {
        if (n % i)
        {
            cout << "Prime" << endl;
            break;
        }
    }
}