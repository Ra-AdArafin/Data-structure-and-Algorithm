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

    int sorted = 0;  

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                sorted = 1;  
            }
        }
    }
    if (sorted == 0)
    {
        cout << "No sorting needed:";
    }
    else
    {
        cout << "Bubble sort:";
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
