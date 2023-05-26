#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,maiorab,maximam;
   cin>>a>>b>>c;
   maiorab= (a+b+abs(a-b))/2;
   maximam= (maiorab+c+abs(maiorab-c))/2;
   cout<<maximam<<" eh o maior"<<endl;

    return 0;
}
