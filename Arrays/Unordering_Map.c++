#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[100];
map<int ,int>mp;
for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
}
 
 int test;
 cin>>test;
 while(test--){
int result;
cin>>result;
cout<<mp[result]<<endl;



 }





    return 0;
}