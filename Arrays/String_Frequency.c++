 #include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int hash[100] = {0}; // Changing the size of hash array to 100
    for (int i = 0; i < n; i++) {
        hash[a[i]]++; // Use a[i] directly as index
    }

    int test;
    cin >> test;
    while (test--) {
        int result;
        cin >> result;
        cout << hash[result] << " "; // Use result directly as index
    }

    return 0;
}
