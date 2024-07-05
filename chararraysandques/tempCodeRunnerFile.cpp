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