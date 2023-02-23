#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 4*n; i++)
    {

        cout << i << " " << i + 1 << " " << i + 2 << " PUM" << endl;
        i += 3;
    }

    return 0;
}