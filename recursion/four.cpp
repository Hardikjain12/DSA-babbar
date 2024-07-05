#include <iostream>
using namespace std;

int power(int a, int b)
{
    // base case
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    // RECURSIVE CALL
    int ans = power(a, b / 2);

    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        // if b is odd
        return a * ans * ans;
    }
}

bool checkPalindrome(string str, int i, int j)
{

    // base case
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;
    else
    {
        // Recursive call
        return checkPalindrome(str, i + 1, j - 1);
    }
}

void reverse(string &str, int i, int j)
{
    // base case
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverse(str, i, j);
}

void bubblesrt(int *arr , int n)
{
    //basecase
    if (n == 0 || n==1)
    return ;

    //RC
    for(int i = 0; i<n; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }     
    }
    bubblesrt(arr,n-1);
}
int main()
{

    int a, b;
    cin >> a >> b;
    cout << endl;
    int ans = power(a, b);

    cout << "Answer is " << ans << endl;

    // -------------------------------------------------------------------
    string name = "BookkooB";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

    if (isPalindrome)
    {
        cout << "Its a Palindrome " << endl;
    }
    else
    {
        cout << "Its not a Palindrome " << endl;
    }
    // --------------------------------------
    string nam = "abcde";
    cout << endl;
    reverse(nam, 0, nam.length() - 1);
    cout << endl;
    cout << nam << endl;
    return 0;
}