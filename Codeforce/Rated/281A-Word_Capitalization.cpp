#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    cin >> a;

    if (a[0] >= 'A' && a[0] <= 'Z')
    {
        a[0] = a[0] + 32;
    }
    if (a[0] >= 'a' && a[0] <= 'z')
    {
        a[0] = a[0] - 32;
    }
    cout << a << endl;
}
