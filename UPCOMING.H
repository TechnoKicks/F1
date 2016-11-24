
class race
	{
		int year, month, day;
		char city[50];
		char country[50];

		time_t time;

		public :
		void tmleft();
		void next_race();
		long retrt();
		char* retcity();
		char* retcountry();
	};

long race::retrt()
	{
		return time;
	}

char* race::retcountry()
{
	return country;
}

char* race::retcity()
	{
		return city;
	}


void race::tmleft()
{

	clrscr();
	tm time1;

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

	time1.tm_year = year - 1900;
	time1.tm_mon  = month - 1;
	time1.tm_mday = day;
	time1.tm_hour = 10;
	time1.tm_min  = 0;
	time1.tm_sec  = 35;
	time1.tm_isdst = -1;

   struct tm *tblock;

	time = mktime(&time1);

}

void next_race()
{
	char ch = 'a';
	int i = 0;
	clrscr();

	race ob3;


	long int x;
	time_t first;
	struct tm *tblock;

	i = 0;
	gotoxy(31 , 1);
	first = time(NULL);

	ifstream fin;
	fin.open("races.dat",ios::binary|ios::in);
	while (fin)
	{
	fin.read((char*)&ob3 , sizeof (ob3));
	x = difftime(ob3.retrt(),first);
	tblock = localtime(&x);

	if (first < ob3.retrt())
		{

			if(i == 0)
				{
					cout<<"N E X T   R A C E";
					cout<<"\n\n"<<ob3.retcity()<<" | "<<ob3.retcountry()<<"\n\n";
					if(tblock->tm_mon != 0)
						cout<<tblock->tm_mon<<" Months ";
					if(tblock->tm_mday != 0)
						cout<<tblock->tm_mday<<" Days ";
					cout<<tblock->tm_hour<<" Hours ";
					cout<<tblock->tm_min<<" Minutes ";
					cout<<tblock->tm_sec<<" Seconds Left \n";
					cout<<"\nBookings Open"<<"\nPress Enter Key To Book Now\n";
					i++;
				    }
			else
				{

					cout<<"\n___________________________________________________________\n";
					cout<<"\n"<<ob3.retcity()<<" | "<<ob3.retcountry()<<"\n\n";
					if(tblock->tm_mon != 0)
						cout<<tblock->tm_mon<<" Months ";
					if(tblock->tm_mday != 0)
						cout<<tblock->tm_mday<<" Days ";
					cout<<tblock->tm_hour<<" Hours ";
					cout<<tblock->tm_min<<" Minutes ";


				}
		}
	}

	fin.close();
	gotoxy(55,23);
	cout<<"Press Esc Key To Go Back";
	gotoxy(55,24);
	cout<<"Press Enter Key To Book";
	ch = getch();
	if (ch == 27)
		exit;
	else if (ch == 13)
		{}



}