#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void drawline1(int x0,int y0,int x1,int y1)
{
	float dx,dy,xi,yi;
	int steps,i;
	double slope;
	slope=fabs((y1-y0)/(x1-x0));
	dx=x1-x0;
	dy=y1-y0;
	if(slope>1)
		steps=abs(dy);
	else
		steps=abs(dx);
	xi=dx/steps;
	yi=dy/steps;
	for(i=0;i<steps;i++)
	{
		x0=x0+xi;
		y0=y0+yi;
		putpixel(x0,y0,WHITE);
	}
}

void main()
{
	int gd=DETECT,gm,i,x,y;
	clrscr();
	initgraph(&gd,&gm,"");
	//line(320,0,320,480);
	//line(0,240,640,240);
	//printf("Enter starting point x0,y0:");
	//scanf("%f%f",&x0,&y0);
	//printf("Enter ending point x1,y1:");
	//scanf("%d%d",&x1,&y1);
	rectangle(0,0,400,400);
	x=0;
	y=0;
	for(i=0;i<7;i++)
	{
		x+=50;
		drawline1(x,0,x,400);
		y+=50;
		drawline1(0,y,400,y);
	}
	getch();
	closegraph();
}