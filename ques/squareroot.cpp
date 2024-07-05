#include <iostream>
using namespace std;

long long int squareroot(int n)
{
    int s = 0;
    int e = n; // n is number
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double moreprecise(int num, int precision_count, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision_count; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < num; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number for square root" << endl;
    cin >> n;

    int tempsol = squareroot(n);
    // cout << "THE square root of number is " << squareroot(n) << endl;
    cout << " YHE PRECISE ANS IS "  << moreprecise(n, 3, tempsol);
    return 0;
}