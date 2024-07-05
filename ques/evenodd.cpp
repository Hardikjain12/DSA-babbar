#include <iostream>
using namespace std;

bool isEven(int a)
{
    // odd
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cin >> num;
    if (isEven(num))
    {
        cout << "NO is even  " << endl;
    }
    else
    {
        cout << "no is odd " << endl;
    }

    return 0;
}