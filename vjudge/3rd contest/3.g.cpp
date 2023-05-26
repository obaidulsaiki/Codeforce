#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        {
            int b=0;
           if(a[i]>b)
           {
               a[i]=b;
               cnt=i;
               break;
           }
        }
        cout<<cnt<<endl;
    }
}

