#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int karakterkonumx=5;
    int karakterkonumy=5;
    int hedefkonumx=3;
    int hedefkonumy=3;
    char harita[8][8];
    while(1)
    {
        cout<<"########"<<endl;
        for(int g=0;g<8;g++)
    {
        for(int f=0;f<8;f++)
        {
            harita[g][f]=' ';
            harita[karakterkonumy][karakterkonumx]='O';
            harita[hedefkonumy][hedefkonumx]='H';
            if()
            cout<<harita[g][f];
        }
    }
    for(int j=0;j<8;j++)
    {
        for(int k=0;k<8;k++)
        {
         cout<<harita[j][k];
         if(k==7)
         {
             cout<<"#";
         }
        }
     cout<<endl;
    }
    cout<<"#########"<<endl;
    char girilen=getch();
    if(girilen=='s')
    {
        karakterkonumy=karakterkonumy+1;
    }
     if(girilen=='w')
    {
        karakterkonumy=karakterkonumy-1;
    }
     if(girilen=='d')
    {
        karakterkonumx=karakterkonumx+1;
    }
     if(girilen=='a')
    {
        karakterkonumx=karakterkonumx-1;
    }
    if(karakterkonumx==8)
    {
        karakterkonumx=karakterkonumx-1;
    }
    if(karakterkonumx==-1)
    {
        karakterkonumx=karakterkonumx+1;
    }
    if(karakterkonumy==8)
    {
        karakterkonumx=karakterkonumy-1;
    }
    if(karakterkonumy==-1)
    {
        karakterkonumx=karakterkonumy+1;
    }
    system("cls");
    }
    return 0;
}
