#include"team_b.h"
/*
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
*/
void play_search()
{
	clrscr();
	Player X;
	int p_jno[22];
	char s_name[30],s_name1[30];      //Name for Search
	search:
	clrscr();
	cout<<"Search for Player\n";
	gets(s_name);
	strcpy(s_name1,s_name);
	s_name1[0]=toupper(s_name1[0]);
	ifstream fin;
	fin.open("PLAYER.DAT",ios::binary|ios::in);
	back:
	clrscr();
	cout<<"Players \n";
	fin.seekg(0,ios::beg);
	for(int i=0,p=0; i<22; i++)
	{
		fin.read((char*)&X,sizeof(Player));
		if(strstr(X.FNAME,s_name)!='\0' || strstr(X.LNAME,s_name)!='\0' || strstr(X.FNAME,s_name1)!='\0' || strstr(X.LNAME,s_name1)!='\0')
		{
			p++;
			p_jno[p]=X.JNO;
			cout<<p<<" "<<X.FNAME<<" "<<X.LNAME<<"\n";
		}
	}

	if(p!=0)
	{

		int find;
		cout<<"Which Player you were searching for?\t";
		cin>>find;
		if(find>p)
		{
			cout<<"Wrong input! Press Enter";
			getch();
			goto back;
		}
		fin.seekg(0,ios::beg);
		for(i=0; i<22; i++)
		{
			fin.read((char*)&X,sizeof(Player));
			if(X.JNO==p_jno[find])
			{
				clrscr();
				X.DISP();
			}

		}
	}

	else if(p==0)
	{
		cout<<"*No Player Found*";
	}
	char research;
	gotoxy(50,22);
	cout<<"Press Enter to Search again";
	gotoxy(50,23);
	cout<<"Press Esc to Exit";
	gotoxy(50,24);
	if(p!=0)
	{
		cout<<"Press Space for Back";
	}

	while(1>0)
	{
		research=getch();

		if(research==13)
			goto search;
		else if(research==27)
			break;
		else if(research==' ' && p!=0)
			goto back;
	}

	fin.close();
}

void team_search()
{
	clrscr();
	char SHORT[11][25];
	Team Z;
	char s_name[30],s_name1[30];      //Name for Search
	search:
	clrscr();
	cout<<"Search for Team\n";
	gets(s_name);
	strcpy(s_name1,s_name);
	s_name1[0]=toupper(s_name1[0]);
	ifstream fin;
	fin.open("TEAM.DAT",ios::binary|ios::in);
	back:
	clrscr();
	cout<<"Teams \n";
	fin.seekg(0,ios::beg);
	for(int i=0,p=0; i<11; i++)
	{
		fin.read((char*)&Z,sizeof(Team));
		if(strstr(Z.FTname,s_name)!='\0' || strstr(Z.STname,s_name)!='\0' || strstr(Z.FTname,s_name1)!='\0' || strstr(Z.STname,s_name1)!='\0')
		{
			cout<<p+1<<" "<<Z.FTname<<"\n";
			strcpy(SHORT[p], Z.STname);
			p++;
		}
	}

	if(p!=0)
	{

		int find;
		cout<<"Which Team you were searching for?\t";
		cin>>find;
		if(find>p)
		{
			cout<<"Wrong input! Press Enter";
			getch();
			goto back;
		}
		fin.seekg(0,ios::beg);
		for(i=0; i<11; i++)
		{
			fin.read((char*)&Z,sizeof(Team));
			if(strcmp(Z.STname, SHORT[find-1])==0)
			{
				clrscr();
				Z.Long();
			}

		}
	}

	else if(p==0)
	{
		cout<<"*No Team Found*";
	}

	char research;
	gotoxy(50,22);
	cout<<"Press Enter to Search again";
	gotoxy(50,23);
	cout<<"Press Esc to Exit";
	gotoxy(50,24);
	if(p!=0)
	{
		cout<<"Press Space for Back";
	}

	while(1>0)
	{
		research=getch();

		if(research==13)
			goto search;
		else if(research==27)
			break;
		else if(research==' ' && p!=0)
			goto back;
	}
	fin.close();
}

void show_search()
{
	char x;
	wo:
	clrscr();
	cout<<"1. Search for Player";
	cout<<"\n2. Search for Team";
	x=getch();
	if(x=='1')
		play_search();
	else if(x=='2')
		team_search();
	else
		goto wo;
}
