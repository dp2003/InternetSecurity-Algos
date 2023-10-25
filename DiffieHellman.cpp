#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int p, g, x, a, y, b, ka, kb;

    cout<<"Enter the value of the prime modulus and generator on which both Alice and Bob will agree publicly:\n";    cin>>p;
    cin>>g;

    cout<<"Enter private key of Alice:\n";
    cin>>a;
    x = (int)pow(g, a)%p;

    cout<<"Enter private key of Bob:\n";
    cin>>b;
    y = (int)pow(g, b)%p;

    ka = (long)pow(y, a)%p;
    kb = (long)pow(x, b)%p;

    cout<<"\nSecret key of Alice:"<<ka;
    cout<<"\nSecret key of Bob:"<<kb;

    return 0;
}
