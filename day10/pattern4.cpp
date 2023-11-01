#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }
        for (int j = 5; j >= 5 + 1 - i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}