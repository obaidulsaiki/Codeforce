#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void print(int a[], int n, int i)
{
    if (i < n)
    {
        print(a, n, i + 2);
        cout << a[i] << " ";
    }
}
void solve()
{
    int n;
    cin >> n;
    int a[n], i = 0;
    while (i < n)
    {
        cin >> a[i];
        i++;
    }
    print(a, n, 0);
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