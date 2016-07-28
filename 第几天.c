#include<stdio.h>
void date(int y,int m,int d);
int main()
{
	int year,month,day;
	while(scanf("%d/%d/%d",&year,&month,&day)!=EOF){
		date(year,month,day);
	}
	return 0;
}
void date(int y,int m,int d)
{
	int t;
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
	printf("%d\n",t); 
}

