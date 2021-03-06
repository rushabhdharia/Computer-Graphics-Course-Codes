#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

void main()
{
	int gd=DETECT,gm,c=0;
	float x0,x1,y0,y1,xi,yi,dx,dy;
	//float x2,y2,x3,y3;
	double slope;
	int steps,i;
	clrscr();
	initgraph(&gd,&gm,"");
	line(325,0,325,500);
	line(0,250,650,250);
	printf("ENter the starting point:");
	scanf("%f%f",&x0,&y0);
	printf("enter the ending point:");
	scanf("%f%f",&x1,&y1);
	slope=fabs((y1-y0)/(x1-x0));
	dx=x1-x0;
	dy=y1-y0;
	if(slope>1)
		steps=abs(dy);
	else
		steps=abs(dx);
	xi=dx/steps;
	yi=dy/steps;
	printf("Main Menu\n 1.Normal Line\n 2.Break line\n 3.Dash Dot\n 4.MultiColor line\n 5.Dotted Line\n 6.Thick Line\n");
	printf("Enter your Choice:");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
		printf("NORMAL LINE");
		for(i=0;i<steps;i++)
		{
			x0=x0+xi;
			y0=y0+yi;
			putpixel(x0+325,250-y0,WHITE);
		}
		break;
	case 2:
		printf("Break Line");
		for(i=0;i<steps;i++)
		{
			x0=x0+xi;
			y0=y0+yi;
			if(i%10<5)
			putpixel(x0+325,250-y0,WHITE);
		}
		break;
	case 3:
		printf("Dash Dot");
		for(i=0;i<steps;i++)
		{
			x0=x0+xi;
			y0=y0+yi;
			if(i%20<10||i%20>14&&i%20<17)
				putpixel(x0+325,250-y0,WHITE);
		}
		break;
	case 4:
		printf("MultiColor Line");
		for(i=0;i<steps;i++)
		{
			x0=x0+xi;
			y0=y0+yi;
			putpixel(x0+325,250-y0,i);
		}
		break;
	case 5:
		printf("Dotted Line");
		for(i=0;i<steps;i++)
		{
			x0=x0+xi;
			y0=y0+yi;
			if(i%5==0)
				putpixel(x0+325, 250-y0, WHITE);
		}
		break;
	case 6:
		printf("Thick Line");
		for(i=0;i<steps;i++)
		{
			x0=xi+x0;
			y0=yi+y0;
			if(slope>1)
			{
				putpixel(x0+325,250-y0,WHITE);
				putpixel(x0+325+1,250-y0,WHITE);
			}
			else
			{
				putpixel(x0+325,250-y0,WHITE);
				putpixel(x0+325,250-y0+1,WHITE);
			}
		}
		break;
	}
	getch();
	closegraph();
}
