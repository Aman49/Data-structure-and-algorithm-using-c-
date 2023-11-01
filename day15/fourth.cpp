#include <iostream>
using namespace std;

int main()
{
    char name = 'a';
    char name1 = 'A';
    while (name <= 'z')
    {
        cout << name << endl;
        name++;
    }
    while (name1 <= 'Z')
    {
        cout << name1 << endl;
        name1++;
    }
}