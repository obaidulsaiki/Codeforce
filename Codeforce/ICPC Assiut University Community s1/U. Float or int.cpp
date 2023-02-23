#include<iostream>
using namespace std;
int main()
{
    double a,x,y,s;
    cin>>a;
    x=a;
    y=(int)a;
    s=x-y;

    if(y==a)
    {
        cout<<"int " <<y;
    }
else if(x==a)
    {
        cout<<"float " <<y<<" "<<s;
    }


    return 0;
}
