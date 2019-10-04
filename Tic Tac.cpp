// Tic Tac.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player = 'X';
int n;
void draw()
 {system("cls");
	 for(int i=0;i<3;i++)
        {for(int j=0;j<3;j++)
        cout<<matrix[i][j]<<" ";
         cout<<endl;}
 }
 
void input()
 {int a;
	 cout<<"Press the number of th field"<<endl;
 cin>>a;
 if(a==1){if(matrix[0][0]=='1')matrix[0][0]=player;else cout<<"field is already in use try again !"<<endl;}
 else if(a==2){if(matrix[0][1]=='2')matrix[0][1]=player;else cout<<"field is already in use try again !"<<endl;}
 else if(a==3){if(matrix[0][2]=='3')matrix[0][2]=player;else cout<<"field is already in use try again !"<<endl;}
 else if(a==4){if(matrix[1][0]=='4')matrix[1][0]=player;else cout<<"field is already in use try again !"<<endl;}
 else if(a==5){if(matrix[1][1]=='5')matrix[1][1]=player;else cout<<"field is already in use try again !"<<endl;}
 else if(a==6){if(matrix[1][2]=='6')matrix[1][2]=player;else cout<<"field is already in use try again !"<<endl;}
 else if(a==7){if(matrix[2][0]=='7')matrix[2][0]=player;else cout<<"field is already in use try again !"<<endl;}
 else if(a==8){if(matrix[2][1]=='8')matrix[2][1]=player;else cout<<"field is already in use try again !"<<endl;}
 else if(a==9){if(matrix[2][2]=='9')matrix[2][2]=player;else cout<<"field is already in use try again !"<<endl;}
 }
 
void toggleplayer()
 {if(player=='X')player='O';
 else player= 'X';
 }

char win()
{//first player
	if(matrix[0][0]=='X'&& matrix[0][1]=='X' && matrix[0][2]=='X')
return 'X';
	if(matrix[1][0]=='X'&& matrix[1][1]=='X' && matrix[1][2]=='X')
return 'X';
	if(matrix[2][0]=='X'&& matrix[2][1]=='X' && matrix[2][2]=='X')
return 'X';

	if(matrix[0][0]=='X'&& matrix[1][0]=='X' && matrix[2][0]=='X')
return 'X';
	if(matrix[0][1]=='X'&& matrix[1][1]=='X' && matrix[2][1]=='X')
return 'X';
	if(matrix[0][2]=='X'&& matrix[1][2]=='X' && matrix[2][2]=='X')
return 'X';
	
	if(matrix[0][0]=='X'&& matrix[1][1]=='X' && matrix[2][2]=='X')
return 'X';
    if(matrix[0][2]=='X'&& matrix[1][1]=='X' && matrix[2][0]=='X')
return 'X';

//second player
if(matrix[0][0]=='O'&& matrix[0][1]=='O' && matrix[0][2]=='O')
return 'O';
	if(matrix[1][0]=='O'&& matrix[1][1]=='O' && matrix[1][2]=='O')
return 'O';
	if(matrix[2][0]=='O'&& matrix[2][1]=='O' && matrix[2][2]=='O')
return 'O';

	if(matrix[0][0]=='O'&& matrix[1][0]=='O' && matrix[2][0]=='O')
return 'O';
	if(matrix[0][1]=='O'&& matrix[1][1]=='O' && matrix[2][1]=='O')
return 'O';
	if(matrix[0][2]=='O'&& matrix[1][2]=='O' && matrix[2][2]=='O')
return 'O';
	
	if(matrix[0][0]=='O'&& matrix[1][1]=='O' && matrix[2][2]=='O')
return 'O';
    if(matrix[0][2]=='O'&& matrix[1][1]=='O' && matrix[2][0]=='O')
return 'O';
return '/';
}
int _tmain(int argc, _TCHAR* argv[])
{cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                                    Tic Tac"<<endl<<"                                             by:"<<endl<<"                                                   DAII Chakib";
cout<<endl<<endl<<endl;
cout<<endl<<endl<<endl<<endl;	
cout<<endl<<endl;
cout<<endl<<endl<<endl<<"                                                  press any key to continue ^_^";
getch();	
n=0;
	draw();
while(1)
{input();
n++;
draw();
if(win()=='X'){cout<<" X Wins !!"<<endl;break;}
else if(win()=='O'){cout<<" O Wins !!"<<endl;break;}
else if(win()=='/' && n==9){cout<<"It's a Draw !!"<<endl;break;}
toggleplayer();
}
system("pause");
return 0;
}

