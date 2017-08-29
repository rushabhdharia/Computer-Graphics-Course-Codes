#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void bezier(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
	float pux,puy,u,n;
	for(u=0;u<1;u+=0.001)
	{
		n=1-u;
		pux=pow(n,3)*x1+3*pow(n,2)*u*x2+3*n*pow(u,2)*x3+pow(u,3)*x4;
		puy=pow(n,3)*y1+3*pow(n,2)*u*y2+3*n*pow(u,2)*y3+pow(u,3)*y4;
		putpixel(pux,puy,WHITE);
	}
}

void main()
{
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"");
	bezier(200,240,270,190,400,225,400,290);
	bezier(400,190,400,265,270,290,200,240);
	line(400,190,400,290);
	bezier(240,220,280,233,280,247,240,260);
	circle(235,230,5);
	getch();
	closegraph();
}