#include<iostream>
#include<math.h>
using namespace std;

int gcd(int a, int b) {
   int t;
   while(1) {
      t= a%b;
      if(t==0)
      return b;
      a = b;
      b= t;
   }
}
int main()
{
    double p,q;

    cout<<"Enter two random prime number: "<<"\n";
    cin>>p>>q;

    double n=p*q;

    cout<<"Computing value of n: "<<n<<"\n";

    double e=7;
    double phi = (p-1)*(q-1);

    cout<<"Computing the value of phi: "<<phi<<"\n";

    while(e<phi)
    {
        if(gcd(e,phi)==1)
            break;
        else
            e++;
    }

   double d1=1/e;
   double d=fmod(d1,phi);
   double message = 9;
   double c = pow(message,e);
   double m = pow(c,d);
   c=fmod(c,n);
   m=fmod(m,n);
   cout<<"Original Message = "<<message;
   cout<<"\n"<<"e = "<<e;
   cout<<"\n"<<"d = "<<d;
   cout<<"\n"<<"Encrypted message = "<<c;
   cout<<"\n"<<"Decrypted message = "<<m;
   return 0;


}
