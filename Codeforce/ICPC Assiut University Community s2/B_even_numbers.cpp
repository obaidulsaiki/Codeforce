#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,even,cn=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
            cn++;
        }


    }
    if(cn==0)
    {
    printf("-1");
    }
    
 }