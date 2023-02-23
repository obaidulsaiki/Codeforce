#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0, pnt = 0;
    cin >> n;
    string str;
    string BineryN = bitset<32>(n).to_string();
    for (int i = 0; i < BineryN.size(); i++)
    {
        if (BineryN[i] == '1')
        {
            cnt++;
        }
    }
    for (int i = 1; i <= cnt; i++)
    {
        str[i] = 1;
    };
    int by = std::atoi(str);
    string BineryNum = bitset<32>(by).to_string();
    cout << BineryNum << endl;
    for (int i = 0; i < BineryN.size(); i++)
    {
        if (BineryNum[i] == '1')
        {
            pnt++;
        }
    }
    cout << pnt << endl;

    return 0;
}
