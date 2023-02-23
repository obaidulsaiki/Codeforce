#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<char> s;
        for (int i = 0; i < str.size(); ++i)
        {
            s.push_back(str[i]);
        }
        for (int i = 0; i < x; ++i)
        {
            if (!s.empty() && s.front() != s.back())
            {
                s.pop_front();
                s.pop_back();
            }
        }
        cout << s.size() << "\n";
    }

    return 0;
}