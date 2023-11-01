#include <iostream>
using namespace std;

int cube(int n)
{
    return n * n * n;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << cube(n) << endl;
    return 0;
}