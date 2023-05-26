#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int temp = 0;
void binery(int x)
{
    if (x != 0)
    {

        binery(x / 2);
        cout << x % 2;
    }
}
void solve()
{
    int x;
    cin >> x;
    binery(x);
    cout << endl;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}