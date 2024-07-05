#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << " caacity --> " << v.capacity() << endl;

    v.push_back(4);
    cout << " CApacity --> " << v.capacity() << endl;

    v.push_back(5);
    cout << " CApacity --> " << v.capacity() << endl;

    v.push_back(78);
    cout << " CApacity --> " << v.capacity() << endl;
    cout << " SIZE --> " << v.size() << endl;

    cout << "Element at 2 index is " << v.at(2) << endl;

    cout << "front " << v.front() << endl;
    cout << "back " << v.back() << endl;

    for (int i : v)
    {   
        cout << i << "  " << endl;
    }

    v.pop_back();
    cout << endl;

    for (int i : v)
    {
        cout << i << "  " << endl;
    }

    cout << " SIZE --> " << v.size() << endl;
    cout << " CApacity --> " << v.capacity() << endl;

    v.clear();
    cout << " SIZE --> " << v.size() << endl;
    cout << " CApacity --> " << v.capacity() << endl;
    return 0;
}