#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        if (s[0] == 'X')
        {

            if (s[1] == '+')
            {
                cnt++;
            }
            else if (s[1] == '-')
            {
                cnt--;
            }
        }
        else if (s[2] == 'X')
        {
            if (s[1] == '+')
            {
                cnt++;
            }
            else if (s[1] == '-')
            {
                cnt--;
            }
        }
    }
    cout << cnt << endl;
}
