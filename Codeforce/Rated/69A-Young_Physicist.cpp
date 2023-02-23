#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a1[n], a2[n], a3[n];
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i] >> a2[i] >> a3[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum1 += a1[i];
        sum2 += a2[i];
        sum3 += a3[i];
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}