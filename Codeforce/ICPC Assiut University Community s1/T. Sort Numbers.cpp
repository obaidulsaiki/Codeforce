#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a,b,c;
    cin>>a>>b>>c;
     if(a>=b && b>=c)
    {
        cout<<c<<endl<<b<<endl<<a;
    }
    else if(a>=c && c>=b)
    {
        cout<<b<<endl<<c<<endl<<a;
    }
    else if(b>=a && a>=c)
    {
        cout<<c<<endl<<a<<endl<<b;
    }
    else if(b>=c && c>=a)
    {
       cout<<a<<endl<<c<<endl<<b;
    }
    else if(c>=b && b>=a)
    {
       cout<<a<<endl<<b<<endl<<c;
    }
    else if(c>=a && a>=b)
    {
       cout<<b<<endl<<a<<endl<<c;
    }
    cout<<endl<<endl<<a<<endl<<b<<endl<<c;

}
