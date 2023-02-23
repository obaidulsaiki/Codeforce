#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,div=0;
    cin>>a;
    while(a>0)
    {
        div=a%10;

        a=a/10;

    }
 if(div%2==0)
 {
     cout<<"EVEN";
 }
 else{{
     cout<<"ODD";
 }}
}

