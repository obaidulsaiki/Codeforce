#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char know[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
        'q','r','s','t','u','v','w','x','y','z'};
        char alpha[n];
        for(int i=0;i<n;i++)
        {
            cin>>alpha[i];
        }
        for(int i=0;i<n;i++)
        {
            if(know[i]==alpha[i])
            {
                cout<<i+1<<endl;
            }
        }

    }
    return 0;
}
