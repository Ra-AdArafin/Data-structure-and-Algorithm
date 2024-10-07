#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;
    cout << "capacity->>" << v.capacity() << endl;
    vector<int> a(5, 1);
    cout << "print  a" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    v.push_back(1);
    cout << "capacity->>" << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity->>" << v.capacity() << endl;
    cout << "size->>" << v.size() << endl;

    v.push_back(3);
    cout << "capacity->>" << v.capacity() << endl;
    cout << "size->>" << v.size() << endl;

    cout << "Front->>" << v.front() << endl;
    cout << "Back->>" << v.back() << endl;

    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;
    v.pop_back();

    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}