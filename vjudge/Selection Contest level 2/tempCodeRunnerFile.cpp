#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], freq[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    cout << n - (n - freq[a[n - 1]]) << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        if (freq[a[i]] > 0)
        {
            cout << a[i] << ' ';
            freq[a[i]] = 0;
        }
    }
    return 0;
}
