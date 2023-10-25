
#include<iostream>
using namespace std;

int main(){
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
    return 0;

}


