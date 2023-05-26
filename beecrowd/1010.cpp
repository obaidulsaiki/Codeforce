//Simple Calculate
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double codeofp1,codeofp2, numberofunit1,numberofunit2,
    amount1,amount2,value1,value2,valuetopay;
    cin>>codeofp1>>numberofunit1>>amount1;
    cin>>codeofp2>>numberofunit2>>amount2;
    value1=numberofunit1*amount1;
    value2=numberofunit2*amount2;
    valuetopay=value1+value2;
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<valuetopay
    <<endl;


    return 0;
}
