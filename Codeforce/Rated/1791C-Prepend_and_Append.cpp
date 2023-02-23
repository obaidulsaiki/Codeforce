#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n,cpp=1;
        cin >> n;
        string s;
        cin >> s;
        deque<char>dq;
        for(auto it : s)
        {
            dq.push_back(it);
        }
        while( cpp && dq.size() > 0)
        {
            char a = dq.front();
            char b = dq.back();
            if( a == '0' && b == '1'||a == '1' && b == '0')
            {
                dq.pop_front();
                dq.pop_back();
            }
            else
            {
                cpp=0;
            }
        }
        cout << dq.size() << endl;
    }

    return 0;
}