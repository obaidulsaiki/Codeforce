#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt=0;
    string s1,s2;
    cin>>s1>>s2;

    int n=s1.size();
transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
for(int i=0; i<n; i++)
        {
            if(s1[i]>s2[i])
                {
                    cnt=1;
                    break;
                }

            if(s1[i]<s2[i])
                {
                    cnt=-1;
                    break;
                }

        }
        cout<<cnt<<endl;

}
