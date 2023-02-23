#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, cnt = 0;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum >= 2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}