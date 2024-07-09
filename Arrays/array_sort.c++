#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0;
    int m = 0;
    int h = n - 1;
    while (m <= h)
    {
        if (a[m] == 0)
        {
            swap(a[m], a[l]);
            l++;
            m++;
        }
        else if (a[m] == 1)
        {
            m++;
        }
        else if (a[m] == 2)
        {
            swap(a[m], a[h]);
            h--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
