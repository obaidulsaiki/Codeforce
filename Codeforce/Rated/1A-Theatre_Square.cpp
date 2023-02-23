#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout.precision(25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double m, n, a;
    cin >> n >> m >> a;
    cout << ceil(n / a) * ceil(m / a) << endl;
}
