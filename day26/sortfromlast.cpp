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
    bool swapped = 0;
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = n - 1; i > j; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                swap(arr[i], arr[i - 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}