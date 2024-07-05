#include <iostream>
using namespace std;

int getSum(int ar[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    return sum;
}
int main()
{

    int y[100], m;
    cin >> m; // taking size of array

    for (int i = 0; i < m; i++)
    {
        cin >> y[i];
    }

    cout << " the sum of  all the elements  of array u given is as " << getSum(y, m) << endl;
    return 0;
}