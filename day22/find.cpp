#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}