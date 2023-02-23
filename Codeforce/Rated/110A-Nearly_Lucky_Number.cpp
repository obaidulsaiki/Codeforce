#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt = 0;
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '4' || a[i] == '7')
        {
            cnt++;
        }
    }
    if (cnt == 4 || cnt == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}