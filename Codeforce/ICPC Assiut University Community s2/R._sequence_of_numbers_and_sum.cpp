#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        int a, b;
        cin >> a >> b;
        int maax, miin, sum = 0;
        if(a>0 && b>0)
        {
            maax = max(a, b);
        miin = min(a, b);
        for (int i = miin; i <= maax; i++)
        {
            cout << i << " ";
            sum = sum + i;
        }
        cout << "sum =" << sum << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}