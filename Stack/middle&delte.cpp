#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int count, int size)
{
    // base caase
    if (count == size / 2)
    {
        s.pop();
        return;
    }
    // side me rakh diya
    int num = s.top();
    s.pop();

    // rc
    solve(s, count + 1, size);
    // number vapis dal diya
    s.push(num);
}

void middle(stack<int> &s, int n)
{
    int count = 0;
    solve(s, count, n);
}
