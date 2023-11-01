#include <iostream>
using namespace std;

int main()
{
    int n, mul = 1, rem, ans = 0;
    cout << "Enter the number: ";
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        ans = rem * mul + ans;
        mul *= 2;
    }
    cout << ans;
}