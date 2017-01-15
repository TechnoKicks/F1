#include"search.h"
void edit_team(Team &OB)
{
	clrscr();
	int x,i;
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
		x1:
		clrscr();
		cout<<"Enter New Team  Chief's Name:\t";
		gets(OB.team_chief);
		for(i=0; OB.team_chief[i]!='\0'; i++)
		{
			if(!isalpha(OB.team_chief[i]))
				goto x1;
		}
	}

	else if(x==2)
	{
		x2:
		clrscr();
		cout<<"Enter New Technical Chief's Name:\t";
		gets(OB.tech_chief);
		for(i=0; OB.tech_chief[i]!='\0'; i++)
		{
			if(!isalpha(OB.tech_chief[i]))
				goto x2;
		}

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
		goto edit_team;

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
	cout<<"\nEnter Your Choice";
	cin>>x;
	if(x==1)
	{
		clrscr();
		cout<<"Enter New Podium Finishes:\t";
		cin>>edit.podium;
		while(kbhit())
		{
			getch();
		}
	}

	else if(x==2)
	{
		clrscr();
		cout<<"Enter New Points:\t";
		cin>>edit.point;
		while(kbhit())
		{
			getch();
		}
	}

	else if(x==3)
	{
		clrscr();
		cout<<"Enter Grand Prix Entered:\t";
		cin>>edit.GP_enter;
		while(kbhit())
		{
			getch();
		}
	}

	else if(x==4)
	{
		clrscr();
		cout<<"Enter World Championship:\t";
		cin>>edit.champion;
		while(kbhit())
		{
			getch();
		}
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
		while(kbhit())
		{
			getch();
		}
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
	char ch[250];
	cout<<"Enter Feedback\n";
	gets(ch);
	cout<<"\nThank you for your valuable feedback!";
	cout<<"\nWe might contact you through mail, for improvements in";
	cout<<"\nF1 Racing Hub";
	getch();
}

void review()
{
	char ch[250];
	clrscr();
	char x;
	int y;
	cout<<"How many Stars would you Like to Give us (Max. 5) :D\n";
	while(1>0)
	{
		x=getch();
		if(x=='1')
		{
			y=1;
			break;
		}
		else if(x=='2')
		{
			y=2;
			break;
		}
		else if(x=='3')
		{
			y=3;
			break;
		}
		else if(x=='4')
		{
			y=4;
			break;
		}
		else if(x=='5')
		{
			y=5;
			break;
		}
	}
	for(int i=0; i<y; i++)
	{
		cout<<"* ";
	}

	if(y==1 || y==2)
	{
		cout<<"\nTell us the Problems you faced while using F1 Racing Hub\n";
		cout<<"We will ensure you will not face problem that in next update";
		cout<<"\n_____________________________________\n";
		cout<<"Enter Review\n\n";
	}

	if(y==3 || y==4)
	{
		cout<<"\nThanks for Using and Reviewing F1 Racing Hub";
		cout<<"\n_____________________________________\n";
		cout<<"Enter Review\n\n";
	}

	if(y==5)
	{
		cout<<"\nWe are happy you liked our F1 Racing Hub";
		cout<<"\nWe'll make sure that it gets better & better with future updates";
		cout<<"\n_____________________________________\n";
		cout<<"Enter Review\n\n";
	}

	gets(ch);
}


void show_editor()
{
	clrscr();

	int xy;
	edito:
	clrscr();
	cout<<"1. Edit an Record";
	cout<<"\n2. Feedback";
	cout<<"\n3. Review Us";
	cout<<"\n\nEnter your choice:\t";
	cin>>xy;
	if(xy==1)
		edit();

	else if(xy==2)
		feed();
	else if(xy==3)
		review();
	else
		goto edito;
}

