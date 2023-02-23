#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p1, p2, cnt = 0;
        cin >> n;
        string s;
        cin >> s;
        p1 = 0;
        p2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
            {
                p1++;
            }
            else if (s[i] == 'D')
            {
                p1--;
            }
            else if (s[i] == 'R')
            {
                p2++;
            }
            else if (s[i] == 'L')
            {
                p2--;
            }
            if (p1 == 1 && p2 == 1)
            {
                cnt++;
            }
        }
        if (cnt > 0)
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