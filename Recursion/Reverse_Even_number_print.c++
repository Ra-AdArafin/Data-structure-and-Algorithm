#include <bits/stdc++.h>
using namespace std;
void even(int num, int n)
{
    if (num == n)
    {
        return;
    }

    even(num + 1, n);

    if (num % 2 == 0)
    {
        cout << num << "=>" << "Even Number:" << endl;
    }
}

int main()
{
    int n, num;
    cout << "Enter Number:";
    cin >> num;
    cout << "Enter Number:";
    cin >> n;
    even(num, n);
    return 0;
}