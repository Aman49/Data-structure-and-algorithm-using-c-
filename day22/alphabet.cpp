#include <iostream>
using namespace std;

int main()
{
    char c[26];
    for (int i = 0; i < 26; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < 26; i++)
    {
        cout << c[i] << " ";
    }
}