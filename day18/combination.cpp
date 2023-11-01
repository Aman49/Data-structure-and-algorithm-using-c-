#include <iostream>
using namespace std;

int fact(int n)
{
    int fact = 1, count = 1;
    while (count <= n)
    {
        fact *= count;
        count++;
    }
    return fact;
}
int combination(int n, int r)
{
    int num = fact(n);
    int den = fact(r) * fact(n - r);
    return num / den;
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << combination(n, r);
}