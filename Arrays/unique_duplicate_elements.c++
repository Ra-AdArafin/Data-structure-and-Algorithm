#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];

}
vector<int>uniq,duplicate;

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
            uniq.push_back(i);
            
            
        }
        else if(a[i]!=a[j]){
            duplicate.push_back(i);
            
            
        }
    }
}

cout<<"Uniq Element print:";
for(auto i:uniq){
cout<<i<<" ";

}
cout<<"Duplicate element print:";
for(auto i:duplicate){

    cout<<i<<" ";
}


    return 0;
}