#include<bits/stdc++.h>
using namespace std;
int main()
{
   double a,b,c,pi=3.14159;
   double triangle,circle, trapezium,square,rectangle;
   cin>>a>>b>>c;
   triangle= 1.0/2*a*c;
   circle= pi*c*c;
   trapezium= 1.0/2*(a+b)*c;
   square=b*b;
   rectangle= a*b;
   cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<triangle<<endl;
   cout<<"CIRCULO: "<<fixed<<setprecision(3)<<circle<<endl;
   cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trapezium<<endl;
   cout<<"QUADRADO: "<<fixed<<setprecision(3)<<square<<endl;
   cout<<"RETANGULO: "<<fixed<<setprecision(3)<<rectangle<<endl;

    return 0;
}

