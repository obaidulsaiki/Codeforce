#include<bits/stdc++.h>

using namespace std;
int main()
{
    long a,b,c;
    cin>>a>>b>>c;
    long maximum=max(a,b);
    maximum=max(maximum,c);
    long minimum=min(a,b);
    minimum=min(minimum,c);
    cout<<minimum<<" "<<maximum;
        return 0;

}

