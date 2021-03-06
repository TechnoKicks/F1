#include<fstream.h>

struct DOB
{
	int date;
	int month;
	int year;
};

struct base
{
	char city[30];
	char country[30];
};

struct Player
{
	char FNAME[15];
	char LNAME[15];
	int JNO;
	char TEAM[30];

	char Represent[20];
	int podium;
	float point;
	int GP_enter;
	int champion;
	char high_finish[10];
	int high_pos;
	DOB  age;
	base place;

	void DISP()
	{
		cout<<JNO<<"  "<<FNAME<<" "<<LNAME<<"\n\n";
		cout<<"Team: \t";
		gotoxy(25,3);
		cout<<TEAM<<"\n";
		cout<<"Country:\t ";
		gotoxy(25,4);
		cout<<Represent<<"\n";
		if(podium==0)
		{
			cout<<"Podiums: \t";
			gotoxy(25,5);
			cout<<"N/A\n";
		}

		else
		{
			cout<<"Podiums: \t";
			gotoxy(25,5);
			cout<<podium<<"\n";
		}

		cout<<"Points: \t";
		gotoxy(25,6);
		cout<<point<<"\n";
		cout<<"Grand Prix entered: \t";
		gotoxy(25,7);
		cout<<GP_enter<<"\n";
		if(champion==0)
		{
			cout<<"World Championships: \t";
			gotoxy(25,8);
			cout<<"N/A\n";
		}

		else
		{
			cout<<"World Championships: \t";
			gotoxy(25,8);
			cout<<champion<<"\n";
		}

		cout<<"Highest race finish: \t";
		gotoxy(25,9);
		cout<<high_finish<<"\n";
		cout<<"Highes grid position: \t";
		gotoxy(25,10);
		cout<<high_pos<<"\n";
		cout<<"Date of birth: \t";
		gotoxy(25,11);
		cout<<age.date<<"/"<<age.month<<"/"<<age.year<<"\n";
		cout<<"Place of birth: \t";
		gotoxy(25,12);
		cout<<place.city<<", "<<place.country;
	}
	void input();
};
void Player::input()
	{
		int i, flag=0;
		cout<<"Enter First Name of the Player: ";
		while(1>0)
		{
			flag=0;
			gets(FNAME);
			for(i=0; i<FNAME[i]!='\0'; i++)
			{
				if(isdigit(FNAME[i]))
				{
					gotoxy(1, wherey()-1);
					cout<<"Enter First Name of the Player again:           ";
					gotoxy(wherex()-10, wherey());
					flag=1;
				}
			}
			if(flag==0)
				break;
		}

		cout<<"Enter Last Name of the Player: ";
		while(1>0)
		{
			flag=0;
			gets(LNAME);
			for(i=0; i<LNAME[i]!='\0'; i++)
			{	if(isdigit(LNAME[i]))
				{
					gotoxy(1, wherey()-1);
					cout<<"Enter Last Name of the Player again:           ";
					gotoxy(wherex()-10, wherey());
					flag=1;
				}
			}
			if(flag==0)
				break;
		}

		while(1>0)
		{
			while(kbhit())
				getch();
			cout<<"Enter Jersey Number: ";
			cin>>JNO;
			if(isdigit(JNO))
				break;
			else
				gotoxy(1, wherey()-1);
		}

		cout<<"Enter Team Name: ";
		gets(TEAM);
		cout<<"Country Representing: ";
		while(1>0)
		{	flag=0;
			gets(Represent);
			for(i=0; i<Represent[i]!='\0'; i++)
			{	if(isdigit(Represent[i]))
				{
					gotoxy(1, wherey()-1);
					cout<<"Country Representing:           ";
					gotoxy(wherex()-10, wherey());
					flag=1;
				}
			}
			if(flag==0)
				break;
		}

		while(1>0)
		{
			while(kbhit())
				getch();
			cout<<"Podium Finishes: ";
			cin>>podium;
			if(isdigit(podium))
				break;
			else
				gotoxy(1, wherey()-1);
		}

		while(1>0)
		{
			while(kbhit())
				getch();
			cout<<"Points: ";
			cin>>point;
			if(isdigit(point))
				break;
			else
				gotoxy(1, wherey()-1);
		}

		while(1>0)
		{
			while(kbhit())
				getch();
			cout<<"Grand Prix Entered: ";
			cin>>GP_enter;
			if(isdigit(GP_enter))
				break;
			else
				gotoxy(1, wherey()-1);
		}

		while(1>0)
		{
			while(kbhit())
				getch();
			cout<<"World Championships Won: ";
			cin>>champion;
			if(isdigit(champion))
				break;
			else
				gotoxy(1, wherey()-1);
		}


		cout<<"Highest Race Finish: ";
		gets(high_finish);

		while(1>0)
		{
			while(kbhit())
				getch();
			cout<<"Highest Grid Position: ";
			cin>>high_pos;
			if(isdigit(high_pos))
				break;
			else
				gotoxy(1, wherey()-1);
		}


		while(1>0)
		{
			while(kbhit())
				getch();
			cout<<"Date of Birth: \n\tDATE: ";
			cin>>age.date;
			if(isdigit(age.date))
				break;
			else
				gotoxy(1, wherey()-1);
		}

		while(1>0)
		{
			while(kbhit())
				getch();
			cout<<"\tMONTH: ";
			cin>>age.month;
			if(isdigit(age.month))
				break;
			else
				gotoxy(1, wherey()-1);
		}

		while(1>0)
		{
			while(kbhit())
				getch();
			cout<<"\tYEAR: ";
			cin>>age.year;
			if(isdigit(age.year))
				break;
			else
				gotoxy(1, wherey()-1);
		}

		cout<<"Place of Birth:\n\tCITY: ";
		gets(place.city);
		cout<<"\tCOUNTRY: ";
		gets(place.country);
	}
void show_player()
{
	int x, y, i;
	char ch;
	textbackground(CYAN);
	textcolor(BLACK);
	clrscr();
	x=1,y=-19;
	gotoxy(33,13);
	cout<<" Calling Sebastian ";
	for(i=0;i<7;i++,x+=5,y+=5)
	{
		gotoxy(x,15);
		cout<<".";
		gotoxy(y,15);
		cout<<" ";
		delay(165);
	}

	gotoxy(33,13);
	cout<<"  Clearing Dust    ";
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
	gotoxy(33,13);
	cout<<"      Loading      ";
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

	textcolor(CYAN);
	textbackground(BLACK);
	clrscr();
	char cc;
	Player X;
	ifstream fin;
	fin.open("PLAYER.DAT",ios::binary|ios::in);
	while(fin)
	{
		clrscr();
		gotoxy(50,23);
		cout<<"Press Enter To Continue";
		gotoxy(50,24);
		cout<<"Press Esc To Exit";
		fin.read((char*)&X,sizeof(Player));
		gotoxy(1,1);
		X.DISP();
		while(1>0)
		{
			cc  = getch();
			if (cc == 13)
				break;
			else if (cc == 27)
				goto m;
		}
	}
m:	fin.close();
}
