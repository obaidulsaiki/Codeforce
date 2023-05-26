#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp=0;;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            if(a[i]!=a[i+1] && a[i]!=a[i-1] && a[i]!=a[i+2])
            {
                cout<<i+1<<endl;
            }
        }


    }
    return 0;
}
