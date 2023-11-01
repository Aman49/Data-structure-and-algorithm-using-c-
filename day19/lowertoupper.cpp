#include <iostream>
using namespace std;

char convert(char a)
{
    return a - 'a' + 'A';
}

int main()
{
    char name;
    cin >> name;
    cout << convert(name);
}