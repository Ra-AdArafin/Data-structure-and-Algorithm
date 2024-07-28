#include <bits/stdc++.h>
using namespace std;

int peakelement(int a[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int mid = (start + end) / 2;
        if (a[mid] < a[mid + 1])
        {
            start = mid + 1;
        }
        else if (a[mid] > a[mid + 1])
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int peak = peakelement(a, n);

    cout << "Peak element is " << a[peak] << endl;
    return 0;
}
