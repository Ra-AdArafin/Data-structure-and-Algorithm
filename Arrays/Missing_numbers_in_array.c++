#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int tar = a.length + 1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = n * (n + 1) / 2;
    for (int i = 0; i < tar; i++)
    {
        int sum = sum - a[i];
    }
    cout << "Missing Number is" << sum << endl;
}