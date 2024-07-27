#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[7] = {0, 1, 0, 2, 8, 0, 3};
    int i = 0;
    int j = 7 - 1;
    while (i < j)
    {
        if (a[i] != 0 && a[j] != 0)
        {
            i++;
        }
        else if (a[i] == 0 && a[j] != 0)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
        else if (a[i] != 0 && a[j] == 0)
        {
            i++;
            j--;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}