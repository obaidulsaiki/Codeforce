#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int flag = 0;
    for (int i = a; i <= b; i++)
    {
        int temp = i;
        while (temp > 0)
        {
            int digit = temp % 10;
            temp /= 10;
            if (digit != 4 && digit != 7)
            {
                goto end;
            }
        }
        flag = 1;
        cout << i << " ";
    end:;
    }
    if (!flag)
        cout << "-1";
    return 0;
}
