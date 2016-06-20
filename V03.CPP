#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>

/* These Are All The Functions used in program */
void start();
void start1();
void start0();
void home();
void signup(){}
void login(){}


int op1;
void start()
	{
	clrscr();
	cout<<"\t\t\tWelcome To The F1 Racing Hub";
	cout<<"\n\t\t   Here You Will Find Everything About F1";
	cout<<"\n\n\n";
	cout<<"\n\t\t\tPress Any Key To Continue";
	getch();
	start0();
	}
void start0()
	{
		for(int l = 0 ; l <3 ; l++)
			{
				clrscr();
				gotoxy(30 , 5);
				cout<<"Please Wait";
				gotoxy(-10 , 10);
				for(int k = 0 ; k < 10 ; k++)
					{
						delay(500);
						cout<<".     ";

					}
			}
			start1();

	}


void start1()
	{
		clrscr();
		cout<<"\n\n\n\tHey There , Wanna Sign Up ??? : \n\n\n" ;
		cout<<"\t\tSinging Up Has Its Own Advantages :\n\n";
		cout<<"\t\t\t * Get Live Booking Option\n";
		cout<<"\t\t\t * Access To Editing Option Of The Database\n";
		cout<<"\t\t\t * And Few Surprises ";
		cout<<"\n\n\n";
		cout<<"\t\t\t1) Yea Sure , Why Not...\n";
		cout<<"\t\t\t2) Nah , Any Other Day..\n";
		cout<<"\t\t\t3) I Already Have An Account\n\t\t";
		cin>>op1;
		if (op1 == 1)
			signup();
		else if (op1 == 3)
			login();
		else if(op1 == 2 )
			{}
		else
			{
				cout<<"\nPlease Enter Correct Choice";
				cout<<"\nPress Any Key : ";
				getch();
				start1();
			}
}
void home()
{
	clrscr();
	cout<<"\t\t\t\tHey , Anonymous";
	cout<<"\n\n\n\n\n\n";
	cout<<"\t\t1) Leaderboards\n\n";
	cout<<"\t\t2) Player Database\n\n";
	cout<<"\t\t3) Upcoming Events \n\n";
	cout<<"\t\t4) My Profile";
	getch();
}

void main()
{
	start();
	home();
}





