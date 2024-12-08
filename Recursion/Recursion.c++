
#include <bits/stdc++.h>
using namespace std;

// ফাংশন প্রোটোটাইপ ডিক্লারেশন
void fun4(int n);
void fun3(int n);
void fun2(int n);
void fun1(int n);
void fun0(int n);

void fun4(int n)
{
    cout << n << " days left for birthday" << endl;
    fun3(n - 1);
}
void fun3(int n)
{
    cout << n << " days left for birthday" << endl;
    fun2(n - 1);
}
void fun2(int n)
{
    cout << n << " days left for birthday" << endl;
    fun1(n - 1);
}
void fun1(int n)
{
    cout << n << " days left for birthday" << endl;
    fun0(n - 1);
}
void fun0(int n)
{
    cout << "Happy Birthday" << endl;
}

int main()
{

    fun4(4);
}