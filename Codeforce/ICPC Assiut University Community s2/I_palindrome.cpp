#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,rev=0;
    cin>>n;
    int temp=n;
    while(n>0)
    {
        rev = rev*10+n%10;
        n=n/10;
    }
    if(temp==rev)
    {
        
        cout<<rev<<endl<<"YES"<<endl;
    }
    else
    {
        cout<<rev<<endl<<"NO"<<endl;
    }
}