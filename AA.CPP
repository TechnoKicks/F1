#include<fstream.h>
#include<conio.h>
#include<stdio.h>

class booking // : protected user
{
	char seatno[3];

	public:

	void book();
	void show();
}

void booking::book()
{
	cout << "     |     |     " << endl;
//	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
//	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
//	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "     |     |     " << endl << endl;
}

void main()
{
	booking ob;
	ob.book();
	getch();
}