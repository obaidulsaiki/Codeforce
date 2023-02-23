#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    int months,years;
    cin>>n;
    years=n/365;
    months=(n-years*365)/30;
    n=n-years*365-months*30;
    cout<<years<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<n<<" days"<<endl;
}
