#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,bacteria=0;
    cin>>a;
        while(a>1)
            {
            if(a%2==0)
                a=a/2;
            else
            {
                a=a-1;
                bacteria++;
            }
        }
        cout<<bacteria+1<<endl;
    return 0;
}
