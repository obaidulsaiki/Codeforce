#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c, next;
    cin >> c;
    c = tolower(c);
    next = c + 1;
    if (c == 'z')
    {
        next = c - 25;
    }
    cout << next << endl;
}