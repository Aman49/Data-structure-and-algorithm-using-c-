#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[100];
    cout << "Enter the array element: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int j = 1; j < n; j++)
    {
        for (int i = j; i > 0; i--)
        {
            if (arr[i] > arr[i - 1])
                swap(arr[i], arr[i - 1]);
            else
                break;
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}