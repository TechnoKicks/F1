#include<iostream.h>
#include<dos.h>
#include<conio.h>

void main()
{      int x, y, i;
       for(int f=0;f<2;f++)
       {
		clrscr();
		x=1,y=-19;
		gotoxy(33,13);
		if(f==0)
			{ cout<<"Initializing"; }
		else
			{ cout<<"Building Tracks!";  }
		for(i=0;i<7;i++,x+=5,y+=5)
		{
			gotoxy(x,15);
			cout<<".";
			gotoxy(y,15);
			cout<<" ";
			delay(200);
		}
		gotoxy(33,13);
		if(f==0)
	 		{ cout<<"Finding Players!";  }
	 	else
	 	{ 	 cout<<"                  ";
			 gotoxy(33,13);
			 cout<<"Screwing Nuts"; }
		for(i=0;i<4;i++,y+=5,x++)
		{
			gotoxy(x,15);
			cout<<".";
			gotoxy(y,15);
			cout<<" ";
			delay(200);
		}

		for(i=0;i<6;i++,y++,x++)
		{
			gotoxy(x,15);
			cout<<".";
			gotoxy(y,15);
			cout<<" ";
			delay(325);
		}
		y+=3;
		for(i=0;i<4;i++,y--,x+=5)
		{
			gotoxy(x,15);
			cout<<".";
			gotoxy(y,15);
			cout<<" ";
			delay(200);
		}
		y+=5;

	for(i=0;i<6;i++,y++,x++)
	{
		gotoxy(x,15);
		cout<<".";
		gotoxy(y,15);
		cout<<" ";
		delay(325);
	}
	y+=3            ;
	for(i=0;i<4;i++,y--,x+=5)
	{
		gotoxy(x,15);
		cout<<".";
		gotoxy(y,15);
		cout<<" ";
		delay(220);
	}
	y+=5;

	if(f!=0)
	{
		gotoxy(33,13);
		cout<<"Getting Started";
	}
	for(i=0;i<3;i++,y+=5,x+=5)
	{
		gotoxy(x,15);
	       //	cout<<wherex();
		cout<<".";
		gotoxy(y,15);
		cout<<" ";
		delay(220);
	}
	for(i=0;i<4;i++,y+=5)
		gotoxy(y,15);
		cout<<" ";
	}

	}
	getch();

}