#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a;
    cin >> a;
    int cnt = 0, rnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            cnt++;
        }
        else if (a[i] >= 'A' && a[i] <= '_EM_ZERODIVIDE')
        {
            rnt++;
        }
    }
    if (cnt >= rnt)
    {
        transform(a.begin(), a.end(), a.begin(), ::tolower);
    }
    else if (cnt < rnt)
    {
        transform(a.begin(), a.end(), a.begin(), ::toupper);
    }
    cout << a << endl;
    return 0;
}