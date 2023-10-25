#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    char str[75];
    cout<<"Enter a string"<<endl;
    cin>>str;

    for(i=0;i<75 && str[i]!='\0';i++)
        str[i]=str[i]+1;
    cout<<"Encrypted string:"<<str<<endl;

}
