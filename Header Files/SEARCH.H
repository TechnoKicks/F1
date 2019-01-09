#include"team_b.h"

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
