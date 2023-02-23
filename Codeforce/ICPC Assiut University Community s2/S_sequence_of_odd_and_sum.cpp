#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int maax, miin, sum = 0;
        maax = max(a, b);
        miin = min(a, b);
        for (int i = miin + 1; i < maax; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}