#include<fstream.h>
#include<dos.h>
#include"password.h"
#include<ctype.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>



class class_book:public user
{
	public:
	int x, y;
	char wing;
	// char *runame;
};


void layout(char wing[7][10], char ab)
{
	clrscr();
	int j;
	gotoxy(1,38);
	cout<<"Wing "<<ab<<endl<<endl;
	cout<<"     ";
	for (int i=0; i<10; i++)
	cout<<(i + 1)<<"   ";
	cout<<"\b \b";
	for (i=0; i<7; i++)
	{
			cout<<endl;
			cout<<" "<<(char)(65 + i)<<" ";
			for(j=0; j<10 ; j++)
			{
				if(wing[i][j]=='X')
					cout<<"|_"<<wing[i][j]<<"_";
				else
					cout<<"|___";
			}

			cout<<"|";
			cout<<endl;
	}


}


void show_book()
{
	char wing[7][10];
	int j=0;
	for(int i=0; i<7; i++)
	{
		for(j=0; j<10; j++)
		{
			wing[i][j]='O';
		}
	}
	class_book ob;
	ofstream fin;
	fin.open("YOUR.dat", ios::binary|ios::out|ios::ate);
	while(fin)
	{
		if(strcmp(usr.pu(),ob.pu())==0)
		{
			wing[ob.x][ob.y]='X';
		}
	}
	layout(wing, ob.wing);



}

void main()
{
	show_book();
}
