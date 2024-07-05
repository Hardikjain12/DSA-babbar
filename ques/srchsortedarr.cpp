#include <iostream>
using namespace std;

int binarysrch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + (end - start) / 2);
    }
    return -1;
}

int findpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }

        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int findposition(int arr[], int n, int value)
{
    int pivot = findpivot(arr, n);
    if (value >= arr[pivot] && value <= arr[n - 1])
    {
        // B.S on first line
        return binarysrch(arr, pivot, n - 1, value);
    }
    else
    {
        return binarysrch(arr, 0, pivot - 1, value);
    }
}

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};

    cout << "THE position is" << findposition(arr, 5, 2);
    return 0;
}