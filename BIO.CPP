#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>


struct DOB
{
	int date;
	char month[10];
	int year;
};

struct base
{
	char city[30];
	char country[30];
};

struct player
{
	char NAME[30];
	int j_no;
	char _team[20];
};


class Player
{
	player bio;
	char Represent[20];
	int podium;
	float point;
	int GP_enter;
	int champion;
	char high_finish[10];
	int high_pos;
	DOB  age;
	base place;
public:
	void input()
	{
		cout<<"Enter Name of the Player: ";
		cin>>bio.NAME;
		cout<<"Enter Jersey Number: ";
		cin>>bio.j_no;
		cout<<"Enter Team Name: ";
		cin>>bio._team;
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
		gets(age.month);
		cout<<"\tYEAR: ";
		cin>>age.year;
		cout<<"Place of Birth:\n\tCITY: ";
		gets(place.city);
		cout<<"\tCOUNTRY: ";
		gets(place.country);
	}
	void DISP()
	{
		cout<<bio.j_no<<"  "<<bio.NAME<<"\n\n";
		cout<<"Team: "<<bio._team<<"\n";
		cout<<"Country: "<<Represent<<"\n";
		cout<<"Podiums: "<<podium<<"\n";
		cout<<"Points: "<<point<<"\n";
		cout<<"Grand Prix entered: "<<GP_enter<<"\n";
		cout<<"World Championships: "<<champion<<"\n";
		cout<<"Highest race finish: "<<high_finish<<"\n";
		cout<<"Highes grid position: "<<high_pos<<"\n";
		cout<<"Date of birth: "<<age.date<<"/"<<age.month<<"/"<<age.year<<"\n";
		cout<<"Place of birth: "<<place.city<<", "<<place.country;
	}
};

class Team
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
	void t_enter()
	{
		cout<<"Full Team Name: ";
		gets(FTname);
		cout<<"Area, City: ";
		gets(area.city);
		cout<<"Area, Country: ";
		gets(area.country);
		cout<<"Team Chief Name: ";
		gets(team_chief);
		cout<<"Technical Chief Name: ";
		gets(tech_chief);
		cout<<"Chassis Number: ";
		gets(chasi);
		cout<<"Power Unit: ";
		gets(p_unit);
		cout<<"First Team Entry: ";
		gets(t_entry);
		cout<<"Championship won: ";
		cin>>champs;
		cout<<"Highest Race Finish: ";
		gets(finish);
		cout<<"Pole position: ";
		cin>>pole;
		cout<<"Fastest Laps: ";
		cin>>fast_lap;
		cout<<"\n\nPlayer A\nName: ";
		gets(a.NAME);
		cout<<"Jersey Number: ";
		cin>>a.j_no;
		cout<<"Team: ";
		gets(a._team);
		cout<<"\nPlayer B\nName: ";
		gets(b.NAME);
		cout<<"Jersey Number: ";
		cin>>b.j_no;
		cout<<"Team: ";
		gets(b._team);
		cout<<"Podium Finishes";
		cin>>podium;
		cout<<"Short Team Name";
		gets(STname);
		clrscr();
	}
	void Short()
	{
	cout<<STname<<a.NAME<<b.NAME<<podium<<champs;
	}

	void Long()
	{
	cout<<FTname<<area.city<<area.country<<team_chief<<tech_chief;
	cout<<chasi<<p_unit<<t_entry<<champs<<finish<<pole<<fast_lap;

	cout<<a.j_no<<a.NAME<<a._team;
	cout<<b.j_no<<b.NAME<<b._team;
	}

};


void in_player()
{
	clrscr();
	Player X;
	ofstream fout;
	fout.open("PLAYER.DAT",ios::binary|ios::out);
	for(int i=0; i<22; i++)
	{
		clrscr();
		X.input();
		fout.write((char*)&X,sizeof(Player));
	}
	fout.close();
}

void in_team()
{
	clrscr();
	Team x;
	ofstream fout;
	fout.open("TEAM.DAT",ios::binary|ios::out);
	for(int i=0;i<11;i++)
	{
		cout<<"Team Number "<<i+1<<"\n";
		x.t_enter();
		fout.write((char*)&x,sizeof(Team));
	}
	fout.close();
}

void main()
{
	in_player();
	in_team();
}




