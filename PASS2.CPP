#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class user
	{
		char uname[50];
		char pass[22];

		public :

		char* pp();
		char* pu();

		void gu()
			{
				gets(uname);
			}
		void gp()
			{
				gets(pass);
			}
};

char* user::pp()
	{
		return pass;
	}
char* user::pu()
	{
		return uname;
	}
void login()
	{
		user ob , ob1;
		ifstream fs;
		ob1.gu();
		ob1.gp();
		fs.open("newuser.dat",ios::binary|ios::in);
		int flag  = 0;
		while (fs)
		{
		fs.read((char*)&ob , sizeof(ob));
		if (strcmp(ob.pp(),ob1.pp()) == 0 && strcmp(ob.pu(),ob1.pu()) == 0)
			{
				clrscr();
				cout<<"Login Successful";
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			{
				clrscr();
				cout<<"ACESS DENIED";
			}
	}
void signup()
	{
		user ob;
		ob.gu();
		ob.gp();
		ofstream fs;
		fs.open("newuser.dat",ios::out|ios::binary|ios::ate);
		fs.write((char*)&ob,sizeof(ob));
	}
void main()
{
	cout<<"\n\n\n\t\t1\tSignup";
	cout<<"\n\t\t2\tLogin\n";
	int x;
	cin>>x;
	if (x == 1)
		signup();
	else if (x == 2)
		login();
}

