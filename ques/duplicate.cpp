#include <iostream>
using namespace std;

int findduplicate(int arr[], int n)
{
    int ans = 0;
    //  XOR in all array elements
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR[1,n-1]
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

// void printarray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    int a[5] = {1, 2, 4, 5, 1};

    int find = findduplicate(a, 5);
    cout << " The duplicate element is " << find << endl;
    // printarray(a,size);
    return 0;
}