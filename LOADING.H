#include"password.h"
int op;
void load()
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

void start()
{
	load();

x:	clrscr();
	cout<<"\n\n\n\tHey There , Wanna Sign Up ???  \n\n\n" ;
	cout<<"\t\tSinging Up Has Its Own Advantages :\n\n";
	cout<<"\t\t\t * Get Live Booking Option\n";
	cout<<"\t\t\t * Access To Editing Option Of The Database\n";
	cout<<"\t\t\t * And Few Surprises ";
	cout<<"\n\n\n";
	cout<<"\t\t\t1) Yea Sure , Why Not...\n";
	cout<<"\t\t\t2) Nah , Any Other Day..\n";
	cout<<"\t\t\t3) I Already Have An Account\n\t\t";
	cout<<"\n\t\tEnter Your Choice : ";
	cin>>op;
		if (op == 1)
			signup();
		else if (op == 2)
			{}
		else if(op == 3 )
			login();
		else
			{
				cout<<"\nPlease Enter Correct Choice";
				cout<<"\nPress Any Key ";
				getch();
				goto x;
			}
}