#include<fstream.h>
#include<conio.h>
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

void main()
{
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