#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[k - 1] && a[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}