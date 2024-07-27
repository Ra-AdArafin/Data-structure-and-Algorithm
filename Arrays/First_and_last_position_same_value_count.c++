#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // অ্যারে এর আকার ইনপুট নিচ্ছে
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // অ্যারে এর মান ইনপুট নিচ্ছে
    }

    int key;
    cin >> key; // যেই মানটি খুঁজতে হবে সেটি ইনপুট নিচ্ছে

    int start = 0;
    int end = n - 1;
    int first = -1, last = -1;

    // প্রথম অবস্থান খুঁজতে
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // মধ্যবর্তী উপাদান বের করা
        if (a[mid] == key)
        {
            first = mid;
            end = mid - 1; // প্রথম অবস্থান খুঁজতে বাম দিকে এগোবে
        }
        else if (a[mid] > key)
        {
            end = mid + 1; // ডান অংশ বাদ দিচ্ছে
        }
        else
        {
            start = mid - 1; // বাম অংশ বাদ দিচ্ছে
        }
    }

    start = 0;
    end = n - 1;
    int mid = start + (end - start) / 2;

    // শেষ অবস্থান খুঁজতে
    while (start <= end)
    {
        // মধ্যবর্তী উপাদান বের করা
        if (a[mid] == key)
        {
            last = mid;
            start = mid + 1; // শেষ অবস্থান খুঁজতে ডান দিকে এগোবে
        }
        else if (a[mid] > key)
        {
            end = mid + 1; // ডান অংশ বাদ দিচ্ছে
        }
        else
        {
            start = mid - 1; // বাম অংশ বাদ দিচ্ছে
        }
        int mid = start + (end - start) / 2;
    }

    int total = 0;
    if (first != -1 && last != -1)
    {
        total = last - first + 1;
    }

    cout << "Total Occurrences: " << total << endl;
    cout << "First Position: " << first << endl;
    cout << "Last Position: " << last << endl;

    return 0;
}
