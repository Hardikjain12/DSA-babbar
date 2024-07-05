#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recurrence relation
    return n * factorial(n - 1);
}

int power(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recurrence relation
    return 2 * power(n - 1);
}

void print(int n)
{
    // basecase
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    // recur. relation
    print(n - 1);
}

int main()
{
    int n;
    cin >> n;

    int ans = factorial(n);
    cout << "factorial : " << ans << endl;

    int result = power(n);
    cout << "power : " << result << endl;

    print(n);
    return 0;
}