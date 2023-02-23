#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string c;
    cin>>c;
    int cnt=0;

    for(int i = 0; i < n; i++)
    {
        if(c[i] == c[i+1])
            {
              cnt++;
            }
    }
    cout << cnt<<endl;

}

