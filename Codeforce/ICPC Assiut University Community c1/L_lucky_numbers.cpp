#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, div;
    cin >> a;
    int c = a % 10;
    if (c == 0)
    {
        c = 1;
    }

    int b = a / 10;

    if (b > c)
    {
        if (b % c == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        if (c % b == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}