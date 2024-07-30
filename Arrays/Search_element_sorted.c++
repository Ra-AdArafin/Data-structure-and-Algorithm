#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int start = 0;
    int end = n - 1;
    int pivot = -1;
    int mid;

    // Finding the pivot
    while (start < end)
    {
        mid = (start + end) / 2;
        if (a[mid] > a[end])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    pivot = start;

    if (a[mid] == key)
    {
        cout << "Pivot Element Index is:" << pivot << endl;
    }

    // Search in the appropriate part
    if (key >= a[0] && key <= a[pivot - 1])
    {
        start = 0;
        end = pivot - 1;
    }
    else
    {
        start = pivot;
        end = n - 1;
    }

    // Binary search
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (a[mid] == key)
        {
            cout << "Element found at index: " << mid << endl;
            return 0;
        }
        else if (a[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "-1" << endl;
    return 0;
}
