#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,cnt=0,cnt2=0,cnt3=0,cnt4=0;
   cin>>n;
   int a[n];
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
   }
   for(int i=1;i<=n;i++)
   {
       if(a[i]%2==0)
       {
           cnt++;
       }
       if(a[i]%2!=0)
       {
           cnt2++;
       }
       if(a[i]>0)
       {
           cnt3++;
       }
       if(a[i]<0)
       {
           cnt4++;
       }
   }
   cout<<"Even: "<<cnt<<endl;
   cout<<"Odd: "<<cnt2<<endl;
   cout<<"Positive: "<<cnt3<<endl;
   cout<<"Negative: "<<cnt4<<endl;
   return 0;
}
