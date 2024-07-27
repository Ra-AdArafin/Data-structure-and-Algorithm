#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[20];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;

    int index = linearsearch(a, n, key);

    if (index != -1)
    {
        cout << "Value is " << a[index] << endl;
        cout << "Index is " << index << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }

    return 0;
}
int n;
cin >> n;
int a[100];
for (int i = 0; i < n;i++){
    cin >> a[i];
}
    int ans = -1;
int start = 0;
int end = n - 1;
while(start<=end){

    int mid = (start + end) / 2;

    if(a[mid]==target){
        ans=mid;
        mid = mid + 1;
    }
if(key>mid){
    mid = mid + 1;
}
else if(key<mid){

    mid = mid - 1;
}
int mid = (start + end) / 2;

}
return -1;