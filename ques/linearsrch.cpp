#include <iostream>
using namespace std;

bool search(int ar[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (ar[i] == key)
        {
            return 1;
        }

    }
        return 0;
}
int main()
{

    int arr[10] = {1, 5, 7, -2, 10, 8, 95, 56, 21, 45};

    cout << " Enter element to search " << endl;

    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "element is presesnt " << endl;
    }

    else
    {
        cout << " element not found " << endl;
    }

    return 0;
}