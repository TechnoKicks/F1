#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{       clrscr();
	char ch , h[21];
	cout<<"Enter Password : ";
     x:	for(int i = 0 ; i < 20 ; i++)
		{
			for (int j = 0 ; j < 1 ; j++)
			{
			ch = getch();
			cout<<"*";
			h[i] = ch;
			}
			if (ch == 13)
				{
					if (i <= 6)
						{
							cout<<"\n\nPassword Should Have More Than 6 Letters";
							goto x;
						}
					else
					{
					break;
					}
}
}
cout<<h;
}

