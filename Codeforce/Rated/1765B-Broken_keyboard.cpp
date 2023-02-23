#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 1;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 1; i < n; i+=3)
        {
            if (s[i] != s[i + 1])
            {
                cnt = 0;
            }
        }
        if (cnt == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}