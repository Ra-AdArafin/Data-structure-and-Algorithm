#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    set<int> unique, nonUnique;
    for (auto i : mp) {
        if (i.second == 1) {
            unique.insert(i.first);
        } else {
            nonUnique.insert(i.first);
        }
    }

    cout << "Unique Numbers: ";
    for (int num : unique) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Non-Unique Numbers: ";
    for (int num : nonUnique) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
