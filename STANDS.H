
struct stands
{
	int rank;
	char name[5];
	char team[20];
	int point;
	void in()
	{
		cout<<"Name: ";
		gets(name);
		cout<<"Team: ";
		gets(team);
		cout<<"Points: ";
		cin>>point;
	}

	void out(int i)
	{
		gotoxy(2,i);
		cout<<rank;
		gotoxy(8,i);
		cout<<name<<" | ";
		gotoxy(15,i);
		cout<<team;
		gotoxy(32,i);
		cout<<point;
	}
	void show_stand();
}stand;

void stands::show_stand()
{
	clrscr();
	char ch;
	stands ob1;
	int i=3;
	ifstream fin;
	fin.open("STANDS.DAT", ios::binary|ios::in);
	cout<<"Rank   Name   Team             Points";
	for(int j=0; j<22; j++)
	{
		fin.read((char*)&ob1, sizeof(stands));
		ob1.out(i);
		i++;
	}

	fin.close();
	gotoxy(60,25);
	cout<<"Press Esc to Exit";
	while(1>0)
	{	ch=getch();
		if(ch==27)
		{
			break;
		}
	}
}

