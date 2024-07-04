#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
map<int,int>mp;
for(int i=0;i<n;i++){
mp[a[i]]++;


}

set<int>s;
for(auto i:mp){

s.insert(i.second);

}


if(mp.size()==s.size()){

cout<<"Unique Number"<<endl;

}
else if(mp.size()!=s.size()){
    cout<<"Not unique Number"<<endl;
}








    return 0;
}