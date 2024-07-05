#include <iostream>
using namespace std;
bool issorted(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
        return 1;

    if (arr[0] > arr[1])
        return 0;

    else
    {
        return issorted(arr + 1, size - 1);
    }
}

int getsum(int *arr, int size)
{
    // base case
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];

    int remainingprt = getsum(arr + 1, size - 1);
    int sum = arr[0] + remainingprt;
    return sum;
}

bool linearsrch(int *arr, int size, int key)
{
    // basecase
    if (size == 0)
        return 0;

    if (arr[0] == key)
        return 1;

    bool remain = linearsrch(arr + 1, size - 1, key);
    return remain;
}

bool binarysrch(int *arr, int s, int e, int key)
{
    // baecase
    if (s > e)
        return false;
    int mid = s + (e - s) / 2;
    // basecase
    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        // right part
        binarysrch(arr, mid + 1, e, key);
    }
    else
    {
        // leftpart
        binarysrch(arr, s, mid - 1, key);
    }
}
int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    // -----------------------------------------
    bool ans = issorted(arr, 5);
    if (ans)
    {
        cout << "sorted hai bhaiya " << endl;
    }
    else
    {
        cout << "not sorted bhiaay" << endl;
    }
    // -------------------------------------------------------------
    int result = getsum(arr, 5);
    cout << "the sum of array element is  " << result << endl;
    // ------------------------------------------------------------------------------------
    bool search = linearsrch(arr, 5, 6);
    if (search)
    {
        cout << "element found : " << endl;
    }
    else
    {
        cout << "not found " << endl;
    }
    // ------------------------------------------------------------
    cout << "prwsent or not " << binarysrch(arr, 0, 4, 6) << endl;

    return 0;
}