#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }
}