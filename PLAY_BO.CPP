

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

void show_player()
{
	Player X;
	ifstream fin;
	fin.open("PLAYER.DAT",ios::binary|ios::in);
	while(fin)
	{
		clrscr();
		fin.read((char*)&X,sizeof(Player));
		X.DISP();
		getch();
	}
	fin.close();

}
