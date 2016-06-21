#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
struct base                       //To be used in class Team
{
	char city[30];
	char country[30];
};
struct player                     //To be used in class Team
{
	char _name[30];
	int j_no;
	char _team[20];
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
	void Short();

};
void Team::Short()
	{
		clrscr();
		cout<<"\t"<<STname<<"\t"<<a._name<<"\n\t";
		for(int i=0;i<strlen(STname);i++)
		{	cout<<" ";
		}
		cout<<"\t"<<b._name<<"\n"<<"_____________________________\n\t";
		cout<<"Podium Finishes          "<<podium<<"\n\t";
		cout<<"____________________________";
		cout<<"Championship Titles      "<<champs<<"\n";
	}

void main()
{
	Team x;
	int y;
	ifstream fin;
	fin.open("TEAM.DAT",ios::binary|ios::in);
	if(!fin)
		cout<<"File does not exist";
	for(int i=0;i<11;i++)
	{
		fin.read((char*)&x,sizeof(Team));
		x.Short();
		cin>>y;
	}
	fin.close();
}