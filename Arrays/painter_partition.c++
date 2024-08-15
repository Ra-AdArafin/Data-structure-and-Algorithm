#include <bits/stdc++.h>
using namespace std;

bool ispossible(int a[], int n, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + a[i] <= mid)
        {
            pagesum = pagesum + a[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || a[i] > mid)
            {
                return false;
            }
            pagesum = a[i];
        }
    }
    return true;
}

int bookAllocation(int a[], int n, int m)
{
    int start = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int end = sum;
    int mid;
    mid = (start + end) / 2;

    while (start <= end)
    {

        if (ispossible(a, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
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
    cout << bookAllocation(a, n, m) << endl;
    return 0;
}
