#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int cn=0,fn=0,pn=0,nn=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cn++;
        }
        if(abs(a[i]%2)==1)
        {
            fn++;
        }
        if(a[i]>0)
        {
            pn++;
        }
          if(a[i]<0)
        {
            nn++;
        }

    }
 cout<<"Even: "<<cn<<endl;
 cout<<"Odd: "<<fn<<endl;
 cout<<"Positive: "<<pn<<endl;
 cout<<"Negative:  "<<nn<<endl;

}
