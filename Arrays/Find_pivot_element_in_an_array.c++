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

    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start < end)
    {
        int mid = (start + end) / 2;

        if (a[mid] > a[end])
        {
            start = mid + 1;
        }
        else if (a[mid] < end)
        {
            end = mid;
        }
    }

    ans = start;
    cout << "pivot: " << a[end] << endl;

    return 0;
}
