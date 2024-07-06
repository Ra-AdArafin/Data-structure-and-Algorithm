#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int b[m];
    for(int j = 0; j < m; j++){
        cin >> b[j];
    }
    
    vector<int> v;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]){
                v.push_back(a[i]);
                break; // Match পেয়ে গেলে ভিতরের লুপ থেকে বেরিয়ে আসবে
            }
        }
    }
    
    for(auto i : v){
        cout << i << " "; // v এর উপাদানগুলো সরাসরি প্রিন্ট করা হচ্ছে
    }
    
    return 0;
}