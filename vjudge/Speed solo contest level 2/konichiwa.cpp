#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string s;
    int cnt = 0;
    cin >> s;
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
            }
            else
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}