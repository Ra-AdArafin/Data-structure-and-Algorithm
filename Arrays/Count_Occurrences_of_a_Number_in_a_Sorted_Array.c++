#include <bits/stdc++.h>
using namespace std;

int left_occurance(int a[], int n, int key)
{
    int left = -1;
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == key)
        {
            left = mid;
            end = mid - 1;
        }
        else if (key > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return left;
}

int right_occurance(int a[], int n, int key)
{
    int right = -1;
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == key)
        {
            right = mid;
            start = mid + 1;
        }
        else if (key > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return right;
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
    int key;
    cin >> key;

    sort(a, a + n);

    int left_index = left_occurance(a, n, key);
    int right_index = right_occurance(a, n, key);

    cout << "Left occurance: " << left_index << endl;
    cout << "Right occurance: " << right_index << endl;
    cout << "Total count: " << (right_index - left_index + 1) << endl;

    return 0;
}
