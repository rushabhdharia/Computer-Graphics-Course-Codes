#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#define pi 3.142

void main()
{
	int gd=DETECT, gm;
	float a1,x,y;
	clrscr();
	initgraph(&gd,&gm,"");
	a1=0;
	while(!kbhit())
	{
		ellipse(320,240,0,360,100,50);
		x=320+120*sin(a1);
		y=240-70*cos(a1);
		circle(x,y,20);
		a1+=pi*10/180;
		delay(500);

		cleardevice();
	}
	getch();
	closegraph();
}