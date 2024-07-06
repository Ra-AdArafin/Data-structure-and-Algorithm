#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int m;
cin>>n>>m;
int a[n];
int i=0;
int j=0;
for(i=0;i<n;i++){
   cin>>a[i]; 
}
int b[m];
for(j=0;j<m;j++){
    cin>>a[j];
}
vector<int>v;
while(i<n){
 while(j<m){
    if(a[i]==b[j]){
         v.push_back(i);
         
    }
    j++;

 }
i++;

}

for(auto i:v){
    cout<<i<<" ";

}


    return 0;
}