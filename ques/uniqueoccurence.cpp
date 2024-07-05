#include <iostream>
using namespace std;

// Function to find the count of an element in the array
int findCount(int arr[], int size, int value)
{
    int count = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == value)
        {
            ++count;
        }
    }
    return count;
}

// Function to check if all counts are unique
bool areCountsUnique(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        int count = findCount(arr, size, arr[i]);
        for (int j = 0; j < size; ++j)
        {
            if (i != j && count == findCount(arr, size, arr[j]))
            {
                return false; // Non-unique count found
            }
        }
    }
    return true;
}

int main()
{
     int size = 15;                            // Change this to the size of your array
    int arr[size] = {4, 2, 5, 2, 1, 3, 5, 2, 4, 4,4,1,1,1,1}; // Change this to your array values

    cout << "Original array:\n";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bool isUnique = areCountsUnique(arr, size);
    cout << "Occurrences are " << (isUnique ? "unique" : "not unique") << endl;

    return 0;
}