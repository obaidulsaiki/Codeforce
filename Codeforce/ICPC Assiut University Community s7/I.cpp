#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int cnt;
void stringing(int n, string s)
{
    if (n == 0)
    {
        if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u' || s[n] == 'A' || s[n] == 'E' || s[n] == 'I' || s[n] == 'O' || s[n] == 'U')
        {
            cnt++;
        }
        return;
    }
    if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u' || s[n] == 'A' || s[n] == 'E' || s[n] == 'I' || s[n] == 'O' || s[n] == 'U')
    {
        cnt++;
    }
    stringing(n - 1, s);
}
void solve()
{
    string s;
    getline(cin, s);
    cnt = 0;
    stringing(s.size() - 1, s);
    cout << cnt << endl;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();

    return 0;
}