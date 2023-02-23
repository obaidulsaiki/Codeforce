#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    long long c;
    char s,q='=';
    cin>>a>>s>>b>>q>>c;
    if (s=='+')
    {
        if(a+b==c)
        cout<<"Yes";
        else
        {
            c=a+b;
            cout<<c;
        }
    }
   else if(s=='*')
    {
        if(a*b==c)
        {cout<<"Yes";}
        else
        {
            c=a*b;
            cout<<c;
        }
    }
    else if (s=='-')
    {
        if(a-b==c)
        {
            cout<<"Yes";
        }
        else
        {
            c=a-b;
            cout<<c;
        }

}
}
