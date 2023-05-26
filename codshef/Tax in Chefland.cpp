#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
   while(t--)
    {

        int x;
        cin>>x;
        if(x>100)
        {
            x=x-10;
            cout<<x<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
    return 0;
}
