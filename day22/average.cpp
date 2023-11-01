#include <iostream>
using namespace std;

int main()
{
    float arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    float avg = 0, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    avg = sum / (sizeof(arr) / sizeof(arr[0]));
    cout << avg << endl;
}