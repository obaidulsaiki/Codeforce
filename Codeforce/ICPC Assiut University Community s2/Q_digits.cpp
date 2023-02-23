#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long a;
        cin >> a;
        if (a == 0)
        {
            cout << 0 << endl;
            continue;
        }
        for (a; a > 0; a /= 10)
        {
            cout << a % 10 << " ";
        }
        cout << endl;
    }
    return 0;
}
