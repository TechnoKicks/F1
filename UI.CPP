/*These Are The Header Files For Pre Defined Functions*/
#include<fstream.h>
#include<ctype.h>
#include<time.h>
#include<dos.h>
#include<conio.h>
#include<process.h>
#include<graphics.h>
#include<stdio.h>
#include<iomanip.h>
#include<string.h>

/*These Are Supporting Header Files */
#include"loading.h"
#include"stands.h"
#include"edit.h"
#include"upcoming.h"
#include"showbook.h"

/*These Are The Global Variables Used In Program*/
char getop;
int op;

void start1()
{
	textcolor(CYAN);
	textbackground(BLACK);
	ifstream fin;
	fin.open("loggedin.dat",ios::in|ios::binary);
	user ob2;
	fin.read((char*) &ob2 , sizeof(ob2));
	if(strcmpi(usr.pu(),ob2.pu()) == 0)
	{
x:		clrscr();
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

	else
	{
		ifstream fin2;
		fin2.open("newuser.dat",ios::binary|ios::in);
		while(fin2)
		{
			fin2.read((char*)&usr , sizeof(usr));
			if(strcmp(ob2.pu(),usr.pu()) == 0)
			{
				flag = 1;
				break;
			}
		}
	}
}

void myprofile()
{
	clrscr();
	cout<<"\t\t\t\tHey , "<<usr.runame();
	cout<<"\n\n\n\n\n\n";
	cout<<"\t\t1) My Bookings\n\n";
	cout<<"\t\t2) Edit Records\n\n";
	cout<<"\t\t3) Contact Us\n\n";
	cout<<"\t\t4) Log Out";

	getop = getch();

	if (getop == '1')
		show_book();
	else if(getop == '2')
		show_editor();
	else if(getop == '3')
		show_editor();
	else if(getop == '4')
		usr.logout();
}

void home()
{
	int take;
	textcolor(CYAN);
	textbackground(BLACK);
	char ch;
g:	clrscr();
	cout<<"\t\t\t\tHey , "<<usr.runame();
	cout<<"\n\n\n\n\n\n";
	cout<<"\t\t1) Leaderboards\n\n";
	cout<<"\t\t2) Player Bio\n\n";
	cout<<"\t\t3) Team Bio\n\n";
	cout<<"\t\t4) Search Database\n\n";
	cout<<"\t\t5) Upcoming Events \n\n";
	cout<<"\t\t6) Book Tickets \n\n";

	if(usr.chk() == 1)
	cout<<"\t\t7) My Profile\n\n";
	else
	cout<<"\t\t7) Login\n\n";

	cout<<"\t\t8) Exit";
	getop = getch();

	if(getop == '1')
		stand.show_stand();
	else if	(getop == '2')
		show_player();
	else if	(getop == '3')
		show_team();
	else if	(getop == '4')
		show_search();
	else if	(getop == '5')
		{
			take = next_race();
			if (take == 1)
				goto z;
		}

	else if	(getop == '6')
	{
z:		if (usr.chk() == 1)
			book();
		else
		{
			clrscr();
			gotoxy(30,12);
			cout<<"Seems Like Youre Not Logged In.";
			gotoxy(30,13);
			cout<<"Press Any Key To Continue";
			getch();
			start1();
		}
	}

	else if	(getop == '7')
	{
		if (usr.chk() == 1)
			myprofile();
		else
		 {
			start1();
		 }
	}

	else if (getop == '8')
	{
		H:
		clrscr();
		cout<<"Want to Continue? (Y/N)  ";
		ch=getch();
		if(ch=='Y' || ch=='y')
		{
			ofstream fout;
			fout.open("loggedin.dat",ios::out|ios::binary);
			fout.write((char*)&usr,sizeof(usr));
			fout.close();
			exit(0);
		}

		else if(ch!='N' && ch!='n')
		{
			cout<<"Wrong Input !";
			cout<<"\nPress again";
			delay(500);
			goto H;
		}
	}
	goto g;
}

void main()
{
	load();
	start1();
	home();
}