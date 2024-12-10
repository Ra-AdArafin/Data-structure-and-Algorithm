#include <bits/stdc++.h>
using namespace std;
void fun3(int n)
{
    if (n == 0)
    {
        cout << "Happy Birthday" << endl;
        return;
    }

    cout << n << "=>" << "days left for birthday" << endl;
    fun3(n - 1);
}

int main()
{

    fun3(3);

    return 0;
}