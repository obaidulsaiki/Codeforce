#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long eyes, mouth, body, cnt = 0;
    cin >> eyes >> mouth >> body;
    long long minimum = min(eyes, min(mouth, body));
    cnt = cnt + minimum;
    eyes -= minimum;
    mouth -= minimum;
    body -= minimum;
    minimum = min(eyes / 2, body);
    cnt = cnt + minimum;
    cout << cnt << endl;
    return 0;
}