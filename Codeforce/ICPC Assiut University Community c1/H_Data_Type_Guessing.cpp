#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, k, a;
    cin >> n >> k >> a;
    double db = n * k / a;
    long long ll = n * k / a;
    double difference = db - ll;
    if (difference > 0)
    {
        cout << "double" << endl;
    }
    else if (ll <= 2147483648)
    {
        cout << "int" << endl;
    }
    else
    {
        cout << "long long" << endl;
    }
}
