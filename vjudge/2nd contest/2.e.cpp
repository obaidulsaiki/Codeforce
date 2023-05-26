#include<bits/stdc++.h>
using namespace std;
int main()
{
    int64_t n,x,v;
    cin>>n;
    int64_t a[n];
    for( int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    for( int i=0;i<n;i++)
    {
       if(a[i]==x)
       {
          cout<<i;
          break;

       }
       else
       {
          v++;
       }
    }
if(v==n)
{
    cout<<-1;
}
    return 0;


}
