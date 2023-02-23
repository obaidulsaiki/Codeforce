#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string st = "codeforces";
    while (t--)
    {
        char son;
        int cnt = 0;
        cin >> son;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == son)
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
