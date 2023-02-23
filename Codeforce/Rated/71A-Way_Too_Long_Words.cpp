#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int longivity = 0;
        string s;
        cin >> s;
        int len = s.size();
        if (len > 10)
        {

            longivity = len - 2;
            cout << s[0] << longivity << s[len - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}