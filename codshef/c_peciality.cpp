#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x>y && x>z)
        {
            cout<<"Setter";
        }
        else if(y>x && y>z)
        {
            cout<<"Tester";
        }
        else if(z>x && z>y)
        {
            cout<<"Editorialist";
        }
        cout<<endl;
    }
}
