#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;

int hash[26]={0};
for(int i=0;i<s.size();i++){
    hash[s[i]-'a']++;
}

int test;
cin>>test;
while(test--){

char result;
cin>>result;
cout << hash [result - 'a'] << "";

}
    return 0;
}