#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, s, r;
        cin >> n >> s >> r;
        long long sub = s - r;
        long long div = r % (n - 1);
        long long divide = r / (n - 1);
        cout << sub << " ";
        for (int i = 1; i < n; i++)
        {
            if (div > 0)
            {
                cout << divide + 1 << " " << endl;
                div = div - 1;
            }
            else
            {
                cout << divide << " " << endl;
            }
        }
    }
    return 0;
}