#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        int ad = i;
        int div = 0;
        int SumofDigits = 0;
        while (ad > 0)
        {
            div = ad % 10;
            SumofDigits = SumofDigits + div;
            ad /= 10;
        }
        if (SumofDigits >= a && SumofDigits <= b)
        {
            sum = sum + i;
        }
    }
    cout << sum << endl;
    return 0;
}
