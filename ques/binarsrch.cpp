#include <iostream>
using namespace std;

int binarysrch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + (end-start)/2);
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
        mid = (start + (end-start)/2);
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[7] = {1, 3, 5, 7, 9, 11, 13};

    int index = binarysrch(even, 6, 10);
    cout << "index of element is " << index << endl;

    return 0;
}