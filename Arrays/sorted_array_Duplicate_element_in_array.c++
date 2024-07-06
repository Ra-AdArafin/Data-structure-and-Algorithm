#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int b[m];
for(int j=0;j<m;j++){
    cin>>b[j];
}

int i=0;
int j=0;
vector<int>v;
while(i<n && j<m){
if(a[i]==b[j]){
    v.push_back(a[i]);
    i++;
    j++;
}
else if(a[i]>b[j]){
    j++;
}
else {
    i++;
}


}
for(auto i:v){
    cout<<i<<" ";
}

    return 0;
}