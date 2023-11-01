#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;
    int rem, ans = 0, mul = 1;
    while (n > 0)
    {
        // rem = n&1;
        rem = n % 2;
        n /= 2;
        ans = rem * mul + ans;
        mul *= 10;
    }
    cout << ans << endl;
}