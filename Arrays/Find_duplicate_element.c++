#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

vector<int>freq(n+1,0);
for(int i=0;i<n;i++){

   freq[a[i]]++;

}













return 0;
}