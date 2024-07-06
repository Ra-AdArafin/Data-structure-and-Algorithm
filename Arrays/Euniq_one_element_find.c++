 #include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
    cin >> n;
    int a[n];
    map<int,int> mp;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
       
    }
     

         
    

    set<int> s;

    for(auto i : mp){
        if(i.second!= 1){
            s.insert(i.first);
        }
    }

    for(int num : s){
        cout << num << endl;
    }

    return 0;
}
