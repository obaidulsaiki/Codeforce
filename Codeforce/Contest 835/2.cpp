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
        char a[26];
        char s[n];

        for(int i=0;i<26;i++)
        {
           a[i]='a'+i;
        }
        for(int i=0;i<n;i++)
        {
          cin>>s[i];
        }
        sort(s,s+n,greater<int>());
        for(int i=0;i<26;i++)
        {
          if(s[0]==a[i])
          {
              cout<<i+1<<endl;
          }
        }



    }
    return 0;
}

