#include <bits/stdc++.h>
using namespace std;

void Even_number(int n)
{
    if (n == 1)
    {
        cout << n << " => " << "Odd Number" << endl;
        return;
    }

    Even_number(n - 1);

    if (n % 2 == 0)
        cout << n << " => " << "Even number" << endl;
    else
        cout << n << " => " << "Odd Number" << endl;
}

int main()
{
    int n = 11;
    Even_number(n);
    return 0;
}
