#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int temp;
void paramid(int n)
{
    if (n == 0)
    {
        return;
    }
    paramid(n - 1);
    for (int i = 0; i < temp - n; i++)
    {
        cout << " ";
    }
    for (int i = 0; i < 2 * n - 1; i++)
    {
        cout << "*";
    }
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    temp = n;
    paramid(n);
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