#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

void main()
{
int gd=DETECT,gm;
float x0,x1,y0,y1,xi,yi,dx,dy;
int steps,i,a,b,k;
double m;
clrscr();
initgraph(&gd,&gm,"");
line(300,0,300,500);
line(0,230,700,230);
printf("Enter starting point ");
scanf("%f%f",&x0,&y0);
printf("Enter ending point ");
scanf("%f%f",&x1,&y1);
dx=x1-x0;
dy=y1-y0;
m=dy/dx;
m=fabs(m);
if(m>1)
steps=abs(dy);
else
steps=abs(dx);
xi=dx/steps;
yi=dy/steps;
a=300;
b=230;

printf("1-normal\n2-multicolor\n3-dashed\n4-dashed-dot\n5-dot\n6-thick");
scanf("%d",&k);
switch(k)
{
case 1:  //normal
for(i=0;i<steps;i++)
{
x0=xi+x0;
y0=yi+y0;
putpixel(x0+a,b-y0,WHITE);
delay(100);
}
break;
case 2:          //multicolor
for(i=0;i<steps;i++)
{
x0=xi+x0;
y0=yi+y0;
putpixel(x0+a,b-y0,i%16);
delay(100);
}
break;
case 3:      //dashed
for(i=0;i<steps;i++)
{
x0=xi+x0;
y0=yi+y0;
if(i%20<11)
{
putpixel(x0+a,b-y0,WHITE);
delay(100);
}
}
break;
case 4:              //dashed dot
for(i=0;i<steps;i++)
{
x0=xi+x0;
y0=yi+y0;
if(i%20<10)
{
putpixel(x0+a,b-y0,WHITE);
delay(100);
}
else if(i%20==15)
{
putpixel(x0+a,b-y0,WHITE);
delay(100);
}
}
break;
case 5:    //dot
for(i=0;i<steps;i++)
{
x0=xi+x0;
y0=yi+y0;
if(i%5==0)
putpixel(x0+a,b-y0,WHITE);
delay(100);
}
break;
case 6:
for(i=0;i<steps;i++)
{
x0=xi+x0;
y0=yi+y0;
if(m>1)
{
putpixel(x0+a,b-y0,WHITE);
putpixel(x0+a+1,b-y0,WHITE);
delay(100);
}
else
{
putpixel(x0+a,b-y0,WHITE);
putpixel(x0+a,b-y0+1,WHITE);
delay(100);
}
}
break;
}
getch();
closegraph();
}