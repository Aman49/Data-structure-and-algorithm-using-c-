#include <iostream>
using namespace std;

int binarySeach(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {40, 30, 20, 10, 5, 2};
    cout << binarySeach(arr, 6, 10);
    return 0;
}