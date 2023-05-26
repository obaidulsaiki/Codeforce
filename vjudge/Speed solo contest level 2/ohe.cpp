#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int ant=0,bnt=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==0)
        {
            ant++;
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]==0)
        {
            bnt++;
        }
    }
   

   
 
return 0;
}