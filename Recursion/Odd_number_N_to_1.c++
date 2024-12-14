#include <bits/stdc++.h>
using namespace std;

void odd(int num, int n)
{
    if (num == n)
    {
        return;
    }
    odd(num + 1, n);

    if (num % 2 != 0)
    {
        cout << num << " => Odd Number" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the range (n): ";
    cin >> n;

    int num;
    cout << "Enter the starting number (num): ";
    cin >> num;

    odd(num, n);
    return 0;
}
