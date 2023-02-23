#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        for (int i = x; x > 0; i--)
        {
            int a = i;
            int b = i + 1;
            if (a | b == a + b / 2)
            {
                cout << a << " " << b << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}