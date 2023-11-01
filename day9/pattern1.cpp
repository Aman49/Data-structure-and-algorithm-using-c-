#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 6; row++)
    {
        for (int j = 1; j <= row; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 6; i++)
    {
        cout << i << " ";
    }
    return 0;
}