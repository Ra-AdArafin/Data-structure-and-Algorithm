#include <bits/stdc++.h>
using namespace std;

int findPeakElement(int a[], int n)
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
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    int n = 9;
    int a[] = {70, 60, 3, 10, 30, 40, 10, 2, 3};

    int peakIndex = findPeakElement(a, n);
    cout << "Peak element is " << a[peakIndex] << endl;

    return 0;
}
