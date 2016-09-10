#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

void main()
{       int x, y, i;
	char ch;
	textbackground(CYAN);
	textcolor(BLACK);
	for(int f=0;f<2;f++)
	{	clrscr();
		x=1,y=-19;
		gotoxy(33,13);
		if(f==0)
			cout<<"Initializing";
		else
			cout<<"Building Tracks!";

		for(i=0;i<7;i++,x+=5,y+=5)
		{
			gotoxy(x,15);
			cout<<".";
			gotoxy(y,15);
			cout<<" ";
			delay(165);
		}

		gotoxy(33,13);
		if(f==0)
			cout<<"Finding Players!";

		else
		{
			cout<<"                  ";
			gotoxy(33,13);
			cout<<"Screwing Nuts";
		}

		for(i=0;i<4;i++,y+=5,x++)
		{
			gotoxy(x,15);
			cout<<".";
			gotoxy(y,15);
			cout<<" ";
			delay(165);
		}

		for(i=0;i<6;i++,y++,x++)
		{
			gotoxy(x,15);
			cout<<".";
			gotoxy(y,15);
			cout<<" ";
			delay(275);
		}

		y+=3;
		for(i=0;i<4;i++,y--,x+=5)
		{
			gotoxy(x,15);
			cout<<".";
			gotoxy(y,15);
			cout<<" ";
			delay(165);
		}

		y+=5;
		if(f!=0)
		{
			gotoxy(33,13);
			cout<<"Getting Started";
		}

		for(i=0;i<3;i++,y+=5,x+=5)
		{
			gotoxy(x,15);
			cout<<".";
			gotoxy(y,15);
			cout<<" ";
			delay(165);
		}

		for(i=0;i<4;i++,y+=5)
		{
			gotoxy(y,15);
			cout<<" ";
			delay(165);
		}

	}

	gotoxy(33,13);
	cout<<"    Let's Go        ";
	gotoxy(29,15);
	cout<<"Press Enter to Continue";
	while(1>0)
	{
		ch=getch();
		if(ch==13)
			break;
	}

	gotoxy(29,15);
	cout<<"                            ";
	gotoxy(33,13);
	cout<<"               ";
	gotoxy(33,12);
	cout<<"Getting Started";
	delay(40);
	gotoxy(33,12);
	cout<<"               ";
	gotoxy(33,11);
	cout<<"Getting Started";
	gotoxy(33,18);
	cout<<"    Login";
	gotoxy(33,20);
	cout<<"   Sign Up";
	delay(40);
	gotoxy(33,11);
	cout<<"               ";
	gotoxy(33,9);
	cout<<"Getting Started";
	gotoxy(33,18);
	cout<<"               ";
	gotoxy(33,20);
	cout<<"               ";
	gotoxy(33,16);
	cout<<"    Login";
	gotoxy(33,18);
	cout<<"   Sign Up";
	delay(40);
	gotoxy(33,9);
	cout<<"               ";
	gotoxy(33,7);
	cout<<"Getting Started";
	gotoxy(33,16);
	cout<<"               ";
	gotoxy(33,18);
	cout<<"               ";
	gotoxy(33,13);
	cout<<"     Login ";
	gotoxy(33,14);
	cout<<"    Sign up";
	delay(40);
	gotoxy(33,7);
	cout<<"               ";
	gotoxy(33,5);
	cout<<"    Welcome    ";
	gotoxy(33,6);
	cout<<"      to ";
	gotoxy(33,7);
	cout<<" F1 Racing Hub";
	delay(40);
	while(1>0)
	{
		ch=getch();
		if(ch=='L'||ch=='l')
		{
			cout<<"Login Succesful";
			break;
		}
		else if(ch=='S'||ch=='s')
		{
			cout<<"Enter Details";
			break;
		}
	}
}