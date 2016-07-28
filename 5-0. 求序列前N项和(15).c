#include<stdio.h>

int main ()
{
	double zi,mu,sum=0,i,times,temp;
	scanf("%lf",&times);
	
	for(zi=2,mu=1,i=0;i<times;i++)
	{
		sum+=zi*1.0/mu;
		temp=mu;
		mu=zi*1.0;
		zi=zi*1.0+temp;
	}
	printf("%.2lf",sum);
	return 0;
}
