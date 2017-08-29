#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void bezier(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
	float pux,puy,u,n;
	for(u=0;u<1;u+=0.001)
	{
		cleardevice();
		n=1-u;
		pux=pow(n,3)*x1+3*pow(n,2)*u*x2+3*n*pow(u,2)*x3+pow(u,3)*x4;
		puy=pow(n,3)*y1+3*pow(n,2)*u*y2+3*n*pow(u,2)*y3+pow(u,3)*y4;
		circle(pux,puy,50);
		delay(5);
	}
}

void main()
{
	//int x1,x2,x3,x4,y1,y2,y3,y4;
	int gd =DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"");
	//printf("Enter x1 y1 x2 y2 x3 y3 x4 y4:\n");
	//scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	bezier(50,100,90,175,150,250,200,430);
	bezier(200,430,290,250,350,250,400,430);
	bezier(400,430,490,390,550,390,590,430);
	getch();
	closegraph();
}
