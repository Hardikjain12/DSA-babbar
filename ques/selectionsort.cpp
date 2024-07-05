#include <iostream>
using namespace std;

void selectionsrt(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = 1;
        for (int j = i + 1; j < n; j++)

            if (arr[j] < arr[minindex])

                minindex = j;

        swap(arr[i], arr[minindex]);
    }
}
int main()
{
}