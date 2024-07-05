#include <iostream>
using namespace std;

// Function to check if a value exists in the array
bool search(int arr[], int size, int value)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == value)
        {
            return 1;
        }
    }
    return 0;
}

// Function to count occurrences of each element and get the unique count
int getUniqueCount(int arr[], int size)
{
    int uniqueCount = 0;
    for (int i = 0; i < size; ++i)
    {
        int count = 1; // Initialize the count to 1 for the current element
        if (!search(arr, i, arr[i]))
        {
            // Check if the element is unique
            for (int j = i + 1; j < size; ++j)
            {
                if (arr[i] == arr[j])
                {
                    ++count;
                }
            }
            ++uniqueCount;
            cout << "Element " << arr[i] << " occurs " << count << " time(s).\n";
        }
    }
    return uniqueCount;
}

int main()
{
    int size = 10;                                  // Change this to the size of your array
    int arr[size] = {4, 2, 5, 2, 1, 3, 5, 2, 4, 4}; // Change this to your array values

    cout << "Original array:\n";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    cout << std::endl;

    int uniqueCount = getUniqueCount(arr, size);
    cout << "Number of unique elements: " << uniqueCount << endl;

    return 0;
}