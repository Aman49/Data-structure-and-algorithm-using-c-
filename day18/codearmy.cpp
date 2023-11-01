#include <iostream>
using namespace std;

void print(int n)
{
    while (n)
    {
        cout << "Hello Code Army" << endl;
        n--;
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
}