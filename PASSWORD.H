int flag;
char ch;
class user
{
	char pass[22];
protected :
	char email[30];
	char phone[11];
	char uname[50];
public :
	user()
	{
		strcpy(uname,"Guest");
	}
	int ge();
	void gphone();
	char* pp();
	char* pu();
	void gu()
	{
		gets(uname);
	}
	void gp();
	void ux();
	int chk();
	char* runame();
	char* remail();
	void logout();
}usr;

int m , n , k;

char* user::remail()
{
	return email;
}

char* user::pp()
{
	return pass;
}

char* user::pu()
{
	return uname;
}

int user::chk()
{
	if (flag == 1)
		return 1;
	else
		return 0;
}

char* user::runame()
{
	if (chk() == 0)
	{
		strcpy(uname,"Guest");
	}
	return uname;
}

int user::ge()
{
	int t;
	int u;
	gets(email);
	for (int i = 0  ; i!='/0' ; i++)
	{
		if(email[i] == '@')
			t++;
		if (email[i] == '.')
			u++;
	}

	if (t == 0 || u == 0)
		return 1;
	else
		return 0;
}

void user::gphone()
{
	gets(phone);
}

void user::gp()
{
	for (int num = 0 ; num < 9 ; num++)
	{
z:		ch = getch();
		if(ch == 8)
		{
			cout<<"\b \b";
			goto z;
		}
		else if(ch == 13)
			break;
		else
		{
			cout<<"*";
			pass[num] = ch;
		}
	}

}

void user::ux()
{
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t*************************\n";
	for(int j = 0 ; j < 2 ; j++)
	{
		cout<<"\t\t\t*";
		m =  wherex();
		n = wherey();
		if (j == 0)
		{
			cout<<"Username : ";
			gotoxy((m + 23), n);
			cout<<"*\n";
		}

		else if (j == 1)
		{
			cout<<"Password : ";
			gotoxy((m + 23), n);
			cout<<"*\n";
		}
	}

	cout<<"\t\t\t*************************\n";
}

void login()
{
	user ob ;
	ifstream fs;
	usr.ux();
	gotoxy((m + 11) , (n - 1));
	usr.gu();
	gotoxy((m + 11) , n) ;
	usr.gp();
	getch();
	fs.open("newuser.dat",ios::binary|ios::in);
	while (fs)
	{
		fs.read((char*)&ob , sizeof(ob));
		if (strcmp(ob.pp(),usr.pp()) == 0 && strcmp(ob.pu(),usr.pu()) == 0)
		{
			clrscr();
			cout<<"Login Successful";
			flag = 1;
			getch();
			break;
		}
	}

	if (flag == 0)
	{
		clrscr();
		cout<<"ACESS DENIED";
		getch();
	}
}

void signup()
{
	char pass2[22];
    y:	clrscr();
	user ob;
	cout<<"\n\n\t\tEnter Desired Username : ";
	usr.gu();
	ifstream fin;
	fin.open("newuser.dat",ios::binary|ios::in);
	while (fin)
	{
		fin.read((char*)&ob , sizeof(ob));
		if(strcmp(usr.pu(),ob.pu()) == 0)
		{
			cout<<"\nThis Username Is Already Registered";
			cout<<"\nPress Any Key To Continue";
			getch();
			goto y;
		}
	}
	cout<<"\n\n\t\tEnter Password (Less Than 9 Character)  : ";
	usr.gp();
	cout<<"\n\n\t\tEnter Password Again : ";
	char ch;
	for (int num = 0 ; num < 9 ; num++)
	{
     z:		ch = getch();
		if(ch == 8)
		{
			cout<<"\b \b";
			goto z;
		}

		else if(ch == 13)
			break;
		else
		{
			cout<<"*";
			pass2[num] = ch;
		}
	}

	if(strcmp(usr.pp(),pass2) != 0)
	{
		cout<<"\nBoth The Passwords Must Match !!!";
		cout<<"\nPress Any Key To Continue";
		getch();
		goto y;
	}

 u:	int q = wherex();
	int s = wherey();
	cout<<"\n\n\t\tEnter Your Email ID : ";
	int b = usr.ge();
	if (b > 0)
	{
		cout<<"\nPlease Use Correct Email Address ";
		getch();
		gotoxy(q,s);
		goto u;
	}

	q = wherex();
	s = wherey();
	cout<<"\n\t\tEnter Your Phone Number : ";
	usr.gphone();
	fin.close();
	ofstream fout;
	fout.open("newuser.dat",ios::out|ios::binary|ios::ate);
	fout.write((char*)&usr,sizeof(usr));
	fout.close();
	cout<<"\n\t\tAll Done ";
	flag = 1;
	getch();
}

void user::logout()
{
	strcpy(uname,"Guest");
	user ob;
	ofstream fout;
	fout.open("loggedin.dat",ios::binary|ios::out);
	fout.write((char*)&ob,sizeof(ob));
	fout.close();
}


