#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter Number:";
    cin >> n;
    int a[100];
    
   
    cout << "Input Array" << endl;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int i = 0;
    int k = n;
    
    while(i < k) {
        int j = i + 1;  
        if(j < n) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        
        i = i + 2;  
    }
    
     
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
