 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	int n,year,g,l,i=0,sum=0;
	clrscr();
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&year);
		if(year>2001)
		{
			g=year;
			l=2001;
		}
		else
		{
			l=year;
			g=2001;
		}
		for(i=l;i<=g;i++)
		{
			if(i%4==0&&i%100!=0||i%400==0)
			{
				sum+=366;
			}

		else
			sum+=356;
		sum=sum%7;
		sum-=1;
		}

	if(sum==0)
		printf("Monday");
	else if(sum==1)
		printf("T");
	else if(sum==2)
		printf("W");
	else if(sum==3)
		printf("thr");
		else if(sum==4)
		printf("f");
		else if(sum==5)
		printf("sat");
		else if(sum==6)
		printf("sun");
		i++;

     }
     getch();
 }