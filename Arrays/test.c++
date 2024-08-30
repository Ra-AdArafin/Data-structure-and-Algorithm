#include <bits/stdc++.h>
using namespace std;

bool ispossible(int a[], int mid, int n, int m)
{
    int cowcount = 1;
    int lastpos = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] - lastpos >= mid)
        {
            cowcount++;
            lastpos = a[i];
        }
        if (cowcount == m)
        {
            return true;
        }
    }
    return false;
}

int aggarsive(int a[], int n, int m)
{
    sort(a, a + n);

    int ans = -1;
    int start = 0;
    int end = a[n - 1];
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (ispossible(a, mid, n, m))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int result = aggarsive(a, n, m);
    cout << result << endl;

    return 0;
}
