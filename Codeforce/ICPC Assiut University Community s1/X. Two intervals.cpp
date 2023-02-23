#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a,b,c,d;
cin>>a>>b>>c>>d;
if(c>b && d>b || a>d && a>c)
{
    cout<<"-1";
}
else
{
    a=max(a,c);
    c=min(b,d);
    cout<<a<<" "<<c;
}
}
