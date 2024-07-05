#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << " Enter amount" << endl;
    cin >> amount;
    int rs100, rs50, rs20, rs10, rs1;

    switch (1)
    {
    case 1:
        rs100 = amount / 100;
        amount = amount % 100;
        cout << "No of 100 notes " << rs100 << endl;

    case 2:
        rs50 = amount / 50;
        amount = amount % 50;
        cout << "No of 50 note " << rs50 << endl;

    case 3:
        rs20 = amount / 20;
        amount = amount % 20;
        cout << "No of 20 note " << rs20 << endl;

    case 4:
        rs10 = amount / 10;
        amount = amount % 10;
        cout << "No of 10 note " << rs10 << endl;
        

    case 5:
        rs1 = amount / 1;
        amount = amount % 1;
        cout << "No of 1 coin " << rs1 << endl;
        break;

    return 0;
}
