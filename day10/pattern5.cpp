#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5 - row; col++)
        {
            cout << "  ";
        }
        char name = 'A' + 5 - 1;
        for (char col = 1; col <= row; col++)
        {
            cout << name << " ";
            name--;
        }
        cout << endl;
    }
}