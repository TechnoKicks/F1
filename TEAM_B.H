#include"player_b.h"

/*
struct base
{
	char city[30];
	char country[30];
};
*/

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
public:
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

void show_team()
{
	int x, y, i;
	char ch;
	textbackground(CYAN);
	textcolor(BLACK);
	clrscr();
	x=1,y=-19;
	gotoxy(33,13);
	cout<<" Finding Records";
	for(i=0;i<7;i++,x+=5,y+=5)
	{
		gotoxy(x,15);
		cout<<".";
		gotoxy(y,15);
		cout<<" ";
		delay(165);
	}

	gotoxy(33,13);
	cout<<"  Cleaning Dust    ";

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
	Team q;
	char a,w;
	ifstream fin;
	fin.open("TEAM.DAT",ios::binary|ios::in);
	if(!fin)
		cout<<"File does not exist";
	if(kbhit())
		getch();
	for(i=0;i<11;i++)
	{
		fin.read((char*)&q,sizeof(Team));
		k:
		clrscr();
		q.Short();
		gotoxy(55,23);
		cout<<"Press Enter for Details";
		gotoxy(55,24);
		cout<<"Press Space for Next";
		gotoxy(55,25);
		cout<<"Press Esc to Exit";
		while(1>0)
		{
			fflush(stdin);
			w=getch();
			if(w==13)
			{
				clrscr();
				q.Long();
				gotoxy(55,24);
				cout<<"Press Space for Next";
				gotoxy(55,25);
				cout<<"Press Esc to go back";
				fflush(stdin);
				a = getch();
				if(a==27)
					goto k;
				else if(a==' ')
					goto A;
			}

			else if(w==27)
			{
				goto B;
			}

			else if(w==' ')
			{
				goto A;
			}
		}

		A:
	}
	B:

	clrscr();
	fin.close();
}