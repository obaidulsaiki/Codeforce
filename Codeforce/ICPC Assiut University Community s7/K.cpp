#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void maxi(int a[], int n, int maxim)
{
    if (n == 0)
    {
        cout << maxim << endl;
        return;
    }
    if (a[n] > maxim)
    {
        maxim = a[n];
    }
    maxi(a, n - 1, maxim);
}
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int maxim = -(1e9 + 2);
    maxi(a, n, maxim);
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