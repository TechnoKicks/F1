#include"password.h"
class class_book
{

	public:
	char uname1[22];
	int x, y;
	char wing;
};

void del()
{
	gotoxy(1,15);
	for(int i=0; i<7; i++)
	{
		cout<<"                                                              \n";
	}
	gotoxy(1,15);
}

void layout(char wing[7][10])
{
	clrscr();
	int j;
	cout<<"     ";
	for (int i=0; i<10; i++)
	cout<<(i + 1)<<"   ";
	cout<<"\b \b";
	for (i=0; i<7; i++)
	{
			cout<<endl;
			cout<<" "<<(char)(65 + i)<<" ";
			for(j=0; j<10 ; j++)
				cout<<"|_"<<wing[i][j]<<"_";

			cout<<"|";
			cout<<endl;
	}


}

void pay(char, int);

void book()
{
	clrscr();
	int count=0;
	//char seats[7][10];
	char wing1[7][10];
	char wing2[7][10];
	char wing3[7][10];
	char s_alph, wing;
	int s_no, j, total, s_;

	ifstream fin;
	fin.open("TICKET.txt", ios::in);
	for(int i=0; i<7; i++)
	{
		for(j=0; j<10; j++)
		{
			fin>>wing1[i][j];
		}
	}
	for(i=0; i<7; i++)
	{
		for(j=0; j<10; j++)
		{
			fin>>wing2[i][j];
		}
	}
	for(i=0; i<7; i++)
	{
		for(j=0; j<10; j++)
		{
			fin>>wing3[i][j];
		}
	}

	fin.close();


	cout<<"Which Category of seats you want to book";
	cout<<"\n1. General Phase I";
	cout<<"\n2. General Phase II";
	cout<<"\n3. VIP";
	aa:
	wing=getch();
	more:
	if(wing=='1')
	{
		layout(wing1);
	}

	else if(wing=='2')
	{
		layout(wing2);
	}

	else if(wing=='3')
	{
		layout(wing3);
	}

	else
	{
		goto aa;
	}

       /*	ab:
	cout<<"\n\nHow many seats do you want? (Max. 5)\n";
	cin>>total;
	if(total>5 || total<1)
	{
		gotoxy(wherex(),wherey()-1);
		cout<<"\tNot Allowed!";
		delay(1000);
		del();
		goto ab;
	}
	delay(1000);
	del();*/


	ac:
	cout<<"\n\nWhich Seat Would You Like To Book ??\n ";
	s_alph=getch();
	if(islower(s_alph))
	{
		s_alph=toupper(s_alph);
	}
	else if(!isalpha(s_alph))
	{
		gotoxy(1,15);
		clreol();
		goto ac;
	}
	cout<<s_alph;
	cin>>s_no;
	s_=(int)s_alph-65;

	if(s_alph!='A' && s_alph!='B' && s_alph!='C' && s_alph!='D' && s_alph!='E' && s_alph!='F' && s_alph!='G' && s_no<1 && s_no>10)
	{
		cout<<" (Wrong Input! Enter again)";
		delay(1000);
		del();
		goto ac;
	}

	if(wing=='1')
	{
		if(wing1[s_][s_no-1]=='X')
		{
			cout<<"Sorry! But the seat you entered is already booked";
			cout<<"\nTry Again with another seat";
			delay(5000);
			del();
			goto ac;
		}

		else
		{
			wing1[s_][s_no-1]='X';
		}
	}
	else if(wing=='2')
	{
		if(wing2[s_][s_no-1]=='X')
		{
			cout<<"Sorry! But the seat you entered is already booked";
			cout<<"\nTry Again with another seat";
			delay(5000);
			del();
			goto ac;
		}

		else
		{
			wing2[s_][s_no-1]='X';
		}

	}

	else if(wing=='3')
	{
		if(wing3[s_][s_no-1]=='X')
		{
			cout<<"Sorry! But the seat you entered is already booked";
			cout<<"\nTry Again with another seat";
			delay(5000);
			del();
			goto ac;
		}

		else
		{
			wing3[s_][s_no-1]='X';
		}
	}

	ofstream fout;
	fout.open("TICKET.txt", ios::out);
	for(i=0; i<7; i++)
	{
		for(j=0; j<10; j++)
		{
			fout<<wing1[i][j];
		}
	}

	for(i=0; i<7; i++)
	{
		for(j=0; j<10; j++)
		{
			fout<<wing2[i][j];
		}
	}

	for(i=0; i<7; i++)
	{
		for(j=0; j<10; j++)
		{
			fout<<wing3[i][j];
		}
	}
	fout.close();
	clrscr();
	class_book inlink;
	fout.open("YOUR.dat", ios::binary|ios::out|ios::ate);

      //    //
	//

	inlink.x=s_;
	inlink.y=s_no-1;
	inlink.wing=wing;
	strcpy(inlink.uname1,usr.pu());

	fout.write((char*)&inlink, sizeof(inlink));
	fout.close();
	if(wing=='1')
		layout(wing1);
	else if(wing=='2')
		layout(wing2);
	else
		layout(wing3);
	cout<<"\n\nThank You for Booking with us";

	char ch;
	count++;
	gotoxy(50,23);
	cout<<"Press Esc to go Back";
	gotoxy(50,24);
	cout<<"Press Enter to Book More";
	while(1>0)
	{
		ch=getch();
		if(ch==27)
		{
			pay(wing,count);
		       return;
		}
		else if(ch==13)
		{
			goto more;
		}

	 }

}

void pay(char wing, int count)
{
	long int sum=0;
	char ch;
	if(wing==1)
	{
		sum=count*7500;
	}

	else if(wing==2)
	{
		sum=count*14000;
	}

	else
	{
		sum=count*20000;
	}

	clrscr();
	cout<<"Order Details:\t";
	if(wing==1)
	{
		gotoxy(9,3);
		cout<<"General Phase I   X   "<<count;
		gotoxy(8,4);
		cout<<"________________________";
	}
	else if(wing==2)
	{
		gotoxy(9,3);
		cout<<"General Phase II   X   "<<count;
		gotoxy(8,4);
		cout<<"________________________";
	}
	else
	{
		gotoxy(9,3);
		cout<<"VIP   X   "<<count;
		gotoxy(8,4);
		cout<<"____________";
	}
	cout<<"\nOrder Total";
	gotoxy(14,5);
	cout<<sum;

	gotoxy(50,24);
	cout<<"Press Enter to Checkout";
	while(1>0)
	{
		ch=getch();
		if(ch==13)
			break;
	}
	clrscr();
	char credit[30];
	cout<<"Enter Details:\n\n";
	cout<<"\tCard Holder's Name    :   ";
	gets(credit);
	cout<<"\tCard Number  	      :   ";
	gets(credit);
	cout<<"\tCVV                   :   ";
	gets(credit);
	cout<<"\tExpiry Date (MM/YYYY) :   ";
	gets(credit);

	cout<<"\n\n Your Tickets has been sent to your email";
	cout<<"\nCheck your Email "<<usr.remail();



}

