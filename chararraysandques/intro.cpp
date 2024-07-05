#include <iostream>
using namespace std;

void reverse(char nae[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(nae[s++], nae[e--]);
    }
}
// ---------------------------------------------------------------------------------------
int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
// ---------------------------------------------------------------------------------------
bool checkpalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
// -----------------------------------------------------------------------------------------
char tolowercase(char ch)
{
    if (ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' +'a';
        return temp;
    }
    
    
}

int main()
{
    char name[20];
    cin >> name;
    cout << "Your name  ";
    cout << name << endl;

    int len = getlength(name);
    cout << "THE LENGTH OF string is " << len << endl;

    reverse(name, len);
    cout << "Your name after reverse ";
    cout << name << endl;

    cout << "palindrome or not " << checkpalindrome(name, len) << endl;
    return 0;
}