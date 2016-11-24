#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>

struct base
{
	char city[30];
	char country[30];
};

struct player
{
	char NAME[30];
	int JNO;
	char TEAM[20];
};

struct Team
{
	char FTname[30];          //Full Team Name
	base area;                //Place, Team from
	char team_chief[30];      //Name of Team Chief
	char tech_chief[30];      //Name of Technical Chief
	char chasi[15];           //Chassis Number
	char p_unit[15];          //Name of Power Unit
	char t_entry[5];          //First Team Entry
	int champs;               //Number of times world championships won
	char finish[10];          //Highest  Race Finish
	int pole;                 //Pole Position
	int fast_lap;             //Fastest Lap
	player a;
	player b;
	int podium;               //Podium Finishes
	char STname[20];          //Short Team Name

	void Short()
	{
		gotoxy(7,2);
		cout<<STname;
		gotoxy(5,4);
		cout<<a.NAME;
		gotoxy(5,5);
		cout<<b.NAME;
		gotoxy(30,2);
		cout<<"Podium";
		gotoxy(32,3);
		cout<<"Finishes";
		gotoxy(45,3);
		cout<<podium;
		gotoxy(28,4);
		cout<<"______________________";
		gotoxy(30,6);
		cout<<"Championship";
		gotoxy(32,7);
		cout<<"Titles";
		gotoxy(45,6);
		cout<<champs;
	}
	void Long()
	{
		cout<<"Full Team Name:";
		gotoxy(25,1);
		cout<<FTname<<endl;
		cout<<"Base:";
		gotoxy(25,2);
		cout<<area.city<<", "<<area.country<<endl;
		cout<<"Team Chief:";
		gotoxy(25,3);
		cout<<team_chief<<endl;
		cout<<"Technical Chief:";
		gotoxy(25,4);
		cout<<tech_chief<<endl;
		cout<<"Chassis:";
		gotoxy(25,5);
		cout<<chasi<<endl;
		cout<<"Power Unit:";
		gotoxy(25,6);
		cout<<p_unit<<endl;
		cout<<"First Team Entry:";
		gotoxy(25,7);
		cout<<t_entry<<endl;
		cout<<"World Championship:";
		gotoxy(25,8);
		cout<<champs<<endl;
		cout<<"Highest Race Finish:";
		gotoxy(25,9);
		cout<<finish<<endl;
		cout<<"Pole Positions:";
		gotoxy(25,10);
		cout<<pole<<endl;
		cout<<"Fastest Laps:";
		gotoxy(25,11);
		cout<<fast_lap<<"\n\n";

		cout<<a.JNO<<"\n"<<a.NAME<<"\n"<<a.TEAM;
		gotoxy(20,13);
		cout<<b.JNO;
		gotoxy(20,14);
		cout<<b.NAME;
		gotoxy(20,15);
		cout<<b.TEAM;
	}

};


struct DOB
{
	int date;
	int month;
	int year;
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

	void input()
	{
		clrscr();
		cout<<"Enter First Name of the Player: ";
		gets(FNAME);
		cout<<"Enter Last Name of the Player: ";
		gets(LNAME);
		cout<<"Enter Jersey Number: ";
		cin>>JNO;
		cout<<"Enter Team Name: ";
		gets(TEAM);
		cout<<"Country Representing: ";
		gets(Represent);
		cout<<"Podium Finishes: ";
		cin>>podium;
		cout<<"Points: ";
		cin>>point;
		cout<<"Grand Prix Entered Entered: ";
		cin>>GP_enter;
		cout<<"World Championships Won: ";
		cin>>champion;
		cout<<"Highest Race Finish: ";
		gets(high_finish);
		cout<<"Highest Grid Position: ";
		cin>>high_pos;
		cout<<"Date of Birth: \n\tDATE: ";
		cin>>age.date;
		cout<<"\tMONTH: ";
		cin>>age.month;
		cout<<"\tYEAR: ";
		cin>>age.year;
		cout<<"Place of Birth:\n\tCITY: ";
		gets(place.city);
		cout<<"\tCOUNTRY: ";
		gets(place.country);
	}
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

};

void edit_team(Team &OB)
{
	clrscr();
	int x;
	char ch;

	edit_team:
	clrscr();
	cout<<"What do you want to edit in \n"<<OB.FTname<<"'s Record?";
	cout<<"\n1. Team  Chief's Name";
	cout<<"\n2. Technical Chief's Name";
	cout<<"\n3. World Championships";
	cout<<"\n4. Pole Position";
	cout<<"\n5. Fastest Lap";
	cout<<"\n6. Podium\n\n";
	cout<<"\nEnter Your Choice";
	cin>>x;

	if(x==1)
	{
		clrscr();
		cout<<"Enter New Team  Chief's Name:\t";
		gets(OB.team_chief);

	}

	else if(x==2)
	{
		clrscr();
		cout<<"Enter New Technical Chief's Name:\t";
		gets(OB.tech_chief);

	}

	else if(x==3)
	{
		clrscr();
		cout<<"Enter World Championship:\t";
		cin>>OB.champs;
	}

	else if(x==4)
	{
		clrscr();
		cout<<"Enter New Pole Position:\t";
		cin>>OB.pole;
	}

	else if(x==5)
	{
		clrscr();
		cout<<"Enter New Fastest Lap:\t";
		cin>>OB.fast_lap;
	}

	else if(x==6)
	{
		clrscr();
		cout<<"Enter Podium:\t";
		cin>>OB.podium;
	}

	else
	{
		goto edit_team;
	}

	gotoxy(50,22);
	cout<<"Press Space to View";
	gotoxy(50,23);
	cout<<"Press Enter to go Back";
	gotoxy(50,24);
	cout<<"Press Esc to Exit";
	while(1>0)
	{
		ch=getch();
		if(ch==' ')
		{
			clrscr();
			OB.Long();
			gotoxy(50,23);
			cout<<"Press Enter to go Back";
			gotoxy(50,24);
			cout<<"Press Esc to Exit";
			while(1>0)
			{
				ch=getch();
				if(ch==13)
				{
					clrscr();
					goto edit_team;
				}
				else if(ch==27)
				{
					goto zac;
				}
			}
		}

		else if(ch==13)
		{
			clrscr();
			goto edit_team;
		}

		else if(ch==27)
		{
			goto zac;
		}
	}
	zac:
	ofstream fout;
	fout.open("EDIT_T.DAT", ios::binary|ios::out|ios::ate);
	fout.write((char*)&OB, sizeof(OB));
	fout.close();
	clrscr();
	cout<<"Thank you for Submitting your Record";
	cout<<"\nIt is yet to be approved";
	cout<<"\n\nPress Enter to go Back";
	while(1>0)
	{
		ch=getch();
		if(ch==13)
		{
			break;
		}
	}



}

void edit_play(Player &edit)
{
	clrscr();
	int x;
	char ch;

	edit_play:
	clrscr();
	cout<<"What do you want to edit in \n"<<edit.FNAME<<"'s Record?";
	cout<<"\n1. Podium Finishes";
	cout<<"\n2. Points";
	cout<<"\n3. Grand Prix Entered";
	cout<<"\n4. World Championships";
	cout<<"\n5. Highest Finish";
	cout<<"\n6. Highest Position";
	cout<<"\n7. Whole Record\n\n";
	cout<<"\nEnter Your Choice";
	cin>>x;
	if(x==1)
	{
		clrscr();
		cout<<"Enter New Podium Finishes:\t";
		cin>>edit.podium;
	}

	else if(x==2)
	{
		clrscr();
		cout<<"Enter New Points:\t";
		cin>>edit.point;
	}

	else if(x==3)
	{
		clrscr();
		cout<<"Enter Grand Prix Entered:\t";
		cin>>edit.GP_enter;
	}

	else if(x==4)
	{
		clrscr();
		cout<<"Enter World Championship:\t";
		cin>>edit.champion;
	}

	else if(x==5)
	{
		clrscr();
		cout<<"Enter Highest Finish:\t";
		gets(edit.high_finish);
	}

	else if(x==6)
	{
		clrscr();
		cout<<"Enter Highest Position:\t";
		cin>>edit.high_pos;
	}


	else if(x==7)
	{
		clrscr();
		cout<<"Enter Whole New Record:\t";
		edit.input();
	}

	else
	{
		goto edit_play;
	}

	gotoxy(50,22);
	cout<<"Press Space to View";
	gotoxy(50,23);
	cout<<"Press Enter to go Back";
	gotoxy(50,24);
	cout<<"Press Esc to Exit";
	while(1>0)
	{
		ch=getch();
		if(ch==' ')
		{
			clrscr();
			edit.DISP();
			gotoxy(50,23);
			cout<<"Press Enter to go Back";
			gotoxy(50,24);
			cout<<"Press Esc to Exit";
			while(1>0)
			{
				ch=getch();
				if(ch==13)
				{
					clrscr();
					goto edit_play;
				}
				else if(ch==27)
				{
					goto zab;
				}
			}
		}

		else if(ch==13)
		{
			clrscr();
			goto edit_play;
		}

		else if(ch==27)
		{
			goto zab;
		}
	}
	zab:
	ofstream fout;
	fout.open("EDIT_P.DAT", ios::binary|ios::out|ios::ate);
	fout.write((char*)&edit, sizeof(edit));
	fout.close();
	clrscr();
	cout<<"Thank you for Submitting your Record";
	cout<<"\nIt is yet to be approved";
	cout<<"\n\nPress Enter to go Back";
	while(1>0)
	{
		ch=getch();
		if(ch==13)
		{
			break;
		}
	}

}

void edit()
{
	clrscr();
	cout<<"Help us updating our Records!";
	//cout<<endl<<"Tell Us!";
	char ch;
	cout<<"\n\nPress Enter to Continue";
	while(1>0)
	{
		ch=getch();
		if(ch==13)
			break;
	}
	int xy;
	e_dit:
	clrscr();
	cout<<"1. Edit Team Record";
	cout<<"\n2. Edit Player Record";
	cin>>xy;
	if(xy==1)
	{
		Team OB;
		ifstream fin;
		fin.open("TEAM.DAT", ios::binary|ios::in);
		for(int i=0; i<11; i++)
		{
			clrscr();
			fin.read((char*)&OB, sizeof(OB));
			OB.Short();
			gotoxy(50,23);
			cout<<"Press Enter to  Edit";
			gotoxy(50,24);
			cout<<"Press Space for Next";
			while(1>0)
			{
				ch=getch();
				if(ch==' ')
					break;
				else if(ch==13)
				{
					cout<<"Edit "<<OB.STname;
					cout<<"\n\n";
					edit_team(OB);
					goto zab;
				}
			}
		}
		fin.close();
	}

	if(xy==2)
	{
		Player edit;
		ifstream fin;
		fin.open("PLAYER.DAT",ios::binary|ios::in);
		for(int i=0; i<22; i++)
		{
			clrscr();
			fin.read((char*)&edit, sizeof(edit));
			edit.DISP();
			gotoxy(50,23);
			cout<<"Press Enter to  Edit";
			gotoxy(50,24);
			cout<<"Press Space for Next";
			while(1>0)
			{
				ch=getch();
				if(ch==' ')
					break;
				else if(ch==13)
				{
					cout<<"Edit "<<edit.FNAME<<" "<<edit.LNAME;
					cout<<"\n\n";
					edit_play(edit);
					goto zab;
				}
			}

		}
		fin.close();

	}
	else
	{
		goto e_dit;
	}
	zab:
}

void feed()
{

}

void review()
{

}


void editor()
{
	clrscr();

	int xy;
	editor:
	clrscr();
	cout<<"1. Edit an Record";
	cout<<"\n2. Feedback";
	cout<<"\n3. Review Us";
	cout<<"\n\nEnter your choice";
	cin>>xy;
	if(xy==1)
		edit();
	else if(xy==2)
		feed();
	else if(xy==3)
		review();
	else
		goto editor;
}


void main()
{
	editor();
}