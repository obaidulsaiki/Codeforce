#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long m, n;
    cin >> n >> m;
    long long a[n][m];
    long long a1[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            long long mini = a[i][j];
            a1[i] = min(mini, a[i][j]);
        }
    }
    sort(a1, a1 + n);
    cout << a1[0] << endl;
}