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
    int tar;
    cin >> tar;

    int start = 0;

    int end = n - 1;
    int mid = (start + end) / 2;
    int left = -1;

    while (start <= end)
    {
        if (a[mid] == tar)
        {

            left = mid;
        }

        else if (tar > a[mid])
        {

            start = mid + 1;
        }
        else if (tar < a[mid])
        {

            end = mid - 1;
        }
        int mid = (start + end) / 2;
    }
    cout << left << " ";

    return 0;
}