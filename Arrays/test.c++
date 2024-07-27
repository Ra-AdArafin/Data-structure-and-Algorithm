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
    int key;
    cin >> key;
    int start = 0;
    int end = n - 1;
    int left = -1;
    int total = 0;
    int mid;
    mid = (start + end) / 2;

    while (start <= end)
    {

        if (a[mid] == key)
        {
            left = mid;
            end = mid - 1;
        }
        else if (a[mid] < key)
        {
            start = mid - 1;
        }
        else if (key > mid)
        {
            end = mid + 1;
        }
        mid = (start + end) / 2;
    }

    int left = mid;

    if (left == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        start = 0;
        end = n - 1;
        int right = -1;
        mid = (start + end) / 2;

        while (start <= end)
        {

            if (a[mid] == key)
            {
                right = mid;
                start = mid + 1;
            }
            else if (a[mid] < key)
            {
                start = mid - 1;
            }
            else if (key > mid)
            {
                end = mid + 1;
            }
        }

        int last = right;

        total = (last - left) + 1;

        cout << "First position: " << left << endl;
        cout << "Last position: " << last << endl;
        cout << "Total count: " << total << endl;
    }

    return 0;
}
