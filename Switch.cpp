#include<iostream>
using namespace std;

void CeaserCipher()
{

    string text="Internet Security difficult subject";
    string result_encrypt = "";
    string result_decrypt = "";
    int s = 1;
    for (int i=0;i<text.length();i++)
    {
        result_encrypt += char(int(text[i]+s-97)%26 +97);
    }
    cout << "Text : " << text<<"\n";
    cout<<"Result: "<<result_encrypt<<endl;

    for (int i=0;i<text.length();i++)
    {
        result_decrypt += char(int(text[i]+s-97)%26 +97)-s;
    }
    cout<<"Decrypt : "<<result_decrypt;

}
void CeaserRow()
{
    int i,j,row,col=0;
    char message[10][10];
    char temp[10][10];

    cout<<"Enter number of rows:";
    cin>>row;
    cout<<"\nEnter number of columns:";
    cin>>col;
    cout<<"Enter plain text("<<row*col<<" characters):";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>message[i][j];
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"\n["<<i<<"]["<<j<<"]:"<<message[i][j]<<"\t";
        }
        cout<<"\n";

    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            temp[i+1][j]=message[i][j];
            if(i==row-1){
                temp[0][j]=message[i][j];
            }
        }
    }
    cout<<"\n ROW TRANSPOSE ARRAY";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"\n["<<i<<"]["<<j<<"]:"<<temp[i][j]<<"\t";
        }
        cout<<"\n";
    }

}
void CeaserColumn()
{
    int i,j,row,col=0;
    char message[10][10];
    char temp[10][10];

    cout<<"Enter number of rows:";
    cin>>row;
    cout<<"\nEnter number of columns:";
    cin>>col;
    cout<<"Enter plain text("<<row*col<<" characters):";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>message[i][j];
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"\n["<<i<<"]["<<j<<"]:"<<message[i][j]<<"\t";
        }
        cout<<"\n";
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            temp[i][j+1]=message[i][j];
            if(j==col-1){
                temp[i][0]=message[i][j];
            }
        }
    }
    cout<<"\nCOLUMN TRANSPOSE ARRAY";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"\n["<<i<<"]["<<j<<"]:"<<temp[i][j]<<"\t";
        }
        cout<<"\n";
    }

}
int main()
{
    char choice;
    cout<<"Enter your choice..\na. Substitution Cipher.\nb. Row Transposition Cipher. \nc. Column Transposition Cipher. \n";
    cin>>choice;
    switch(choice)
	{
		case 'a':
					CeaserCipher();
					break;
		case 'b':
					CeaserRow();
					break;
		case 'c':
					CeaserColumn();
					break;
		default:
					cout<<"Enter valid option\n";
    }

}
