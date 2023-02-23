#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        long long Fact = 1;
        cin >> a;
        for (int i = 1; i <= a; i++)
        {
            Fact *= i;
        }
        cout << Fact << endl;
    }

    return 0;
}