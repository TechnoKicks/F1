#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

int x = 0;
int y = 0;

class booking
	{
		char seatno[4];

		public :

		void book();
		void layout();
		void show();
		char* rseatno();
		void gseatno();

}obd,ob;


void book1()
{
	cout<<"\n\nWhich Seat Would You Like To Book ?? : ";
	obd.gseatno();
	ofstream fout;
	fout.open("tickets.dat",ios::binary|ios::out|ios::ate);
	fout.write((char*) &obd , sizeof (obd));
	fout.close();
}


char* booking::rseatno()
{
	return seatno;
}

void booking::gseatno()
{
	gets(seatno);
}

void booking::layout()
{
	clrscr();
	x = wherex();
	y = wherey();
	for (int i = 0  ; i < 8 ; i++)
		{

			if (i == 0)
				{
					cout<<"     ";
					for (int i = 0 ; i < 9 ; i++)
						cout<<(i + 1)<<"   ";
					cout<<"\b \b";
				}

			else
				{
					cout<<endl;
					cout<<" "<<(char)(64 + i)<<" ";
					for(int j = 0 ; j < 9 ; j++)
						cout<<"|___";

					cout<<"|";
					cout<<endl;
				}
		}

}

void booking::show()
{
	char tmpseat[5];
	int a = 1;
	char ch = 'A';
	int flag = 0;

	layout();
	x += 5;
	y += 1;
	gotoxy(x,y);


	ifstream fin;
	fin.open("tickets.dat",ios::binary|ios::in);

	ifstream fin2;
	fin2.open("ticketd.dat",ios::binary|ios::in);
	for (int i = 0 ; i < 7 ; i++)
		{
		a = 1;
		for (int j = 0 ; j < 9 ; j++)
			{
				gotoxy((x + (j*4)), (y + (i*2)));
				while (fin)
				{
					fin.read((char*) &ob , sizeof (ob));
						while (fin2)
						{       flag = 0;
							fin2.read((char*)&obd , sizeof (obd));
							if (strcmp(ob.rseatno(),obd.rseatno()) == 0)

								{

									flag = 1;

								}

								if (flag == 0)
									cout<<"O";
								else
									cout<<"X";

						}

				}
			}
		flag = 0;

	}


}


void booking::book()
{
	clrscr();
	show();
	book1();
}


void main()
{
	booking ob1;
	obd.book();
}