#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int cnt=0;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i=i+1)
    {
        if(s[i]=='+')
        {
            cnt++;
        }
    }
    for(int i=0;i<s.size();i=i+2)
    {
        if(s[i]== '+')
        {
            swap(s[i],s[i+cnt]);
            cnt--;
        }
    }
    cout<<s<<endl;


}
