#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,mul,div;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    mul=a*b*c*d;
    div=mul%100;
    cout<<div;
}
