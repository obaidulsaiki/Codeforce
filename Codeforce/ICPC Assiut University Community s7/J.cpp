#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
long long fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return fact(n - 1) * n;
}
void solve()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
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