#include<iostream>
using namespace std;

void print(int*p)
{
    cout<<*p<<endl;
}
int main()
{
    int val = 5;
    int *p = &val;
    print(p);
    return 0;
}