#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
long long sumation;
int cnt;
void sum(int a[], int n, int m)
{
    if (cnt == m)
    {
        return;
    }
    cnt++;
    sumation = sumation + a[n];
    sum(a, n - 1, m);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    sumation = 0;
    cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sum(a, n, m);
    cout << sumation << endl;
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