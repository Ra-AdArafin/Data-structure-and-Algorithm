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
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int key = a[i];
        mp[key]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {

        cout << it->first << "->>" << it->second << endl;
    }
} 