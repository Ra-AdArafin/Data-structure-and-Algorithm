#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6] = {12, 34, 2, 34, 33, 1};

    int i;
    int max = a[0];
    for (int i = 0; i < 6; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    int smax = max;
    int smaxe = a[0];
    for (int i = 0; i < 6; i++)
    {
        if (smax == a[i])
        {
            i++;
        }
        if (smaxe < a[i])
        {
            smaxe = a[i];
        }
    }
    cout << smax << endl;
    cout << smaxe << endl;
    return 0;
}