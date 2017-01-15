#include<fstream.h>
#include<conio.h>
#include<time.h>
#include<stdio.h>

class race
	{
		time_t time;
		char city[50];
		char country[50];

		public :

		void tmleft();
	};

void race::tmleft()
{

	clrscr();
	tm time1;
	int year, month, day;

	cout<<"Year:  ";
	cin>>year;
	cout<<"\nMonth: ";
	cin>>month;
	cout<<"\nDay:   ";
	cin>>day;
	cout<<"\nCity: ";
	gets(city);
	cout<<"\nCountry: ";
	gets(country);

	ob.tm_year = year - 1900;
	ob.tm_mon  = month - 1;
	ob.tm_mday = day;
	ob.tm_hour = 10;
	ob.tm_min  = 0;
	ob.tm_sec  = 35;
	ob.tm_isdst = -1;

   struct tm *tblock;

	time = mktime(&time1);

}

void main()
{
	race ob3;
	ofstream fin;
	fin.open("races.dat",ios::binary|ios::out|ios::ate);
	ob3.tmleft();
	fin.write((char*)&ob3 , sizeof(ob3));
	fin.close();
}

