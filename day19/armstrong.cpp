#include <iostream>
using namespace std;

int count(int n)
{
    int i = 0;
    while (n)
    {
        i++;
        n /= 10;
    }
    return i;
}
int pow(int n, int i)
{
    int pow = 1;
    int c = 1;
    while (c <= i)
    {
        pow *= n;
        c++;
    }
    return pow;
}
bool armst(int n)
{
    int i = count(n);
    int x = n;
    int sum = 0, rem;
    while (n)
    {
        rem = n % 10;
        sum += pow(rem, i);
        n = n / 10;
    }
    if (sum == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    if (armst(n))
        cout << "Yes";
    else
        cout << "false";
    return 0;
}