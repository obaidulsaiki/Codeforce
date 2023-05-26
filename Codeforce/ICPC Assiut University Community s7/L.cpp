#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
long long sumi;
void sum(long long a[], int n)
{
    if (n == 0)
    {
        return;
    }
    sumi = sumi + a[n];
    sum(a, n - 1);
}
void solve()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sum(a, n);
    cout << sumi << endl;
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