#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>


class ticket
	{
		char seat[3];

		public :

 //		void book();
		void show();
		char* rseatno();
		void gseatno();
		static void layout();

	};

char* ticket::rseatno()
{
	return seat;

}

void ticket::gseatno()
{
	gets(seat);
}

void ticket::layout()
{
	int x , y;
	clrscr();
	x = (wherex() + 5);
	y = (wherey() + 1);
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
			gotoxy(x , y);

}


void book()
{
	ticket::layout();

	int x = wherex();
	int y = wherey();
	int flag = 0;
	int i = 0;

	ticket obd;
	ticket ob;

	ifstream fin;
	ifstream fin2;

	fin.open("ticketd.dat",ios::binary|ios::in);
	fin.open("tickets.dat",ios::binary|ios::in);

	while (fin2)
		{
			fin2.read((char*) &obd , sizeof (obd));
			while (fin)
					{
					flag = 0;
					fin.read((char*) &ob , sizeof (ob));
					if(strcmp(obd.rseatno(),ob.rseatno()) == 0)
						{
							cout<<"YAY";
							flag = 1;
						}
				}
		 //	gotoxy(x,y);

			if(flag == 0)
				cout<<"O";
			else
				cout<<"X";
			i++;
			gotoxy((x + i*4) , y);


		}

	fin.close();
	fin2.close();

	ofstream fout;
	fout.open("tickets.dat",ios::binary|ios::out|ios::ate);

//	cout<<"\n\n\n\n\n\nWhich Seat Would You Like To Book : ";
//	ob.gseatno();
//	fout.write((char*) &ob , sizeof(ob));
	fout.close();


}

void main()
{
	ticket ob;
	book();
	getch();

}