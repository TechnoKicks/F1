#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int  x = 600;
	gotoxy(0 , 35);
	for (int i = 0 ; i < 10 ; i++)
	{
		cout<<".";
		if (i < 5)
		{
		for (int k = 5 ;  k >i ; --k)
			{
				delay(x);
				cout<<"  ";

			}
		x -= 100;

		}
		else
		{      cout<<"....";
			for (int k = 10; k > i , k--)
			{
				delay(x);
			cout<<"  ";
			}
			x += 100;
		}
	}




