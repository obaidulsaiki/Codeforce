#include<bits/stdc++.h>
using namespace std;
int main ()
{
   double productcode1, unit1, productcode2,unit2,price1, price2,VALORAPAGER;
   cin>>productcode1>>unit1>>price1;
   cin>>productcode2 >>unit2>>price2;
   VALORAPAGER=(unit1*price1)+(unit2*price2);
   cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<VALORAPAGER<<endl;
   return 0;

}
