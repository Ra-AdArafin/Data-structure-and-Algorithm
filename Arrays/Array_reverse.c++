#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Number:";
cin>>n;
int a[100];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int i=0;
int j=n-1;
while(i<j){
int temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;


}
cout<<"Array print:"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";

}


    return 0;
}