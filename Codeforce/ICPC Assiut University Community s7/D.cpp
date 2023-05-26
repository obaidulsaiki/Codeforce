#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void print(int n)
{
    int temp = 1;
    if (n != 0)
    {

        print(n / 10);
        cout << n % 10 << " ";
    }
}
void solve()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << " ";
    }
    else
    {
        print(n);
    }
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
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}