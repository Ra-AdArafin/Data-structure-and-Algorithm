#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Pre-calculation
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[a[i]]++;
    }

    int t;
    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        cout << hash[num] << endl;
    }

    return 0;
}
