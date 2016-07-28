#include<stdio.h>

int main()
{
	int y,m,d,t;
	t=0;
	scanf("%d/%d/%d",&y,&m,&d);
	
	switch(m)
	{
			t+=30;
		case 11:
			t+=31;
		case 10:
			t+=30;
		case 9:
			t+=31;
		case 8:
			t+=31;
		case 7:
			t+=30;
		case 6:
			t+=31;
		case 5:
			t+=30;
		case 4:
			t+=31;
		case 3:
			if(y%4==0&&y%100!=0||y%400==0)
				t+=29;
			else
				t+=28;
		case 2:
			t+=31;
		case 1:
			t+=d;
	} 
	
	
	printf("%d",t);
	return 0;
} 
