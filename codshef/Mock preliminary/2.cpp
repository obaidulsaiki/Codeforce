#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int Aryahas, Numberofcola, takaofcola;
        cin >> Aryahas >> Numberofcola >> takaofcola;
        if (Aryahas >= Numberofcola * takaofcola)
        {
            cout << "Case " << i << ": Yes" << endl;
        }
        else
        {
            cout << "Case " << i << ": No" << endl;
        }
    }

    return 0;
}