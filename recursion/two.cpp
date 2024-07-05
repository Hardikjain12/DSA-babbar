#include <iostream>
using namespace std;

// void reachhome(int src, int dest)
// {
//     cout << "src " << src << " dest " << dest << endl;
//     // basecase
//     if (src == dest)
//     {
//         cout << "pahuch gya babuaa" << endl;
//         return;
//     }

//     // processing
//     src++;
//     // R.relation
//     reachhome(src, dest);
// }

int fib(int n)
{
    // base case
    if (n == 0)
        return 0;

    else if (n == 1)
        return 1;

    else
    {

        return fib(n - 1) + fib(n - 2);
    }
}

int countway(long long nstairs)
{
    // base case
    if (nstairs < 0)
        return 0;
    if (nstairs == 0)
        return 1;

    // Rc
    return countway(nstairs - 1) + countway(nstairs - 2);
}

int main()
{

    int n;
    cin >> n;

    int result = fib(n);

    cout << "F(" << n << ") = " << result << endl;

    return 0;
}