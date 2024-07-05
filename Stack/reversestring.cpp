#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string st = "hardik";

    stack<char> s;

    for (int i = 0; i < st.length(); i++)
    {
        // char ch = st[i];
        s.push(st[i]);
    }

    string ans = "";
    while (!s.empty())
    {
        // char c = s.top();
        ans.push_back(s.top());

        s.pop();
    }

    cout << "REsult is " << ans << endl;

    return 0;
}