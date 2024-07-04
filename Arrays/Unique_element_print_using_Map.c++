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

     set<int> uniq, nonuniq;
    for (auto i : mp) {
        if (i.second == 1) {
            uniq.insert(i.first);
        } else if(i.second!=1) {
            nonuniq.insert(i.first);
        }
    }

    cout << "Unique Numbers Are:" << endl;
    for (int num : uniq) {
        cout << "Unique Number: " << num << endl;
    }

    cout << "Non-Unique Numbers Are:" << endl;
    for (int num : nonuniq) {
        cout << "Non-Unique Number: " << num << endl;
    }

    return 0;
}
