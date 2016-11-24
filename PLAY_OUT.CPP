#include<fstream.h>
#include<conio.h>
#include<stdio.h>


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


class Player
{
	char NAME[20];
	char LNAME[20];
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
public:
	void input()
	{
		cout<<"Enter First Name of the Player: ";
		gets(NAME);
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
		cout<<JNO<<"  "<<NAME<<" "<<LNAME<<"\n\n";
		cout<<"Team: "<<TEAM<<"\n";
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
	char ch;
	int i=0;
	ifstream fin;
	fin.open("PLAYER.DAT",ios::binary|ios::in);
	for(;i<22;i++)
	{
		clrscr();
		cout<<"Player "<<i+1<<endl;
		fin.read((char*)&X,sizeof(Player));
		X.DISP();
		cin>>ch;

	}
	fin.close();
}