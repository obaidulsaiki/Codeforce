#include <bits/stdc++.h>
using namespace std;
int main()
{
    int prime, cnt = 0;
    cin >> prime;
    for (int i = 2; i <= prime; i++)
    {
        if ((i + 1) % i == 0 && (i + 2) % i == 0)
        {
            cout << "i"
                 << " ";
        }
    }

    return 0;
}