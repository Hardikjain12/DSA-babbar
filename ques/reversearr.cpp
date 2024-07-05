#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr1[6] = {1, 44, 54, 78, 2, 6};
    int arr2[5] = {44, 54, 78, 2, 6};

    reverse(arr1, 6);
    reverse(arr2, 5);

    printarray(arr1, 6);
    printarray(arr2, 5);
    return 0;
}