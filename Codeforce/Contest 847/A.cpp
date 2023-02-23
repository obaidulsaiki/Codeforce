#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pi = "314159265358979323846264338327";
        string me;
        int i = 0, cnt = 0;
        cin >> me;
        if (me[i] == '3')
        {
            while (i < me.size())
            {
                if (me[i] == pi[i])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
                i++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}