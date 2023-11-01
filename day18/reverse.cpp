// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int reversed(int n)
{
    bool isNegative = false;
    long long int rem, ans = 0, rev;

    if (n < 0)
    {
        isNegative = true;
        n = abs(n);
    }
    while (n > 0)
    {
        rem = n % 10;
        ans = ans * 10 + rem;
        n /= 10;
    }
    if (isNegative)
        ans = -ans;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << reversed(n);

    return 0;
}