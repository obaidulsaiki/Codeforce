// rated 1900 /5/c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string s;
    cin >> s;
    int cnt = 0, pnt = 0, rnt = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty())
            {
                st.pop();
                pnt++;
            }
            else
            {
                cnt++;
            }
        }
    }
    if (pnt < cnt || cnt == 0)
    {
        cout << 2 * pnt << " " << rnt << endl;
    }
    else
    {
        cout << pnt << " " << cnt << endl;
    }

    return 0;
}