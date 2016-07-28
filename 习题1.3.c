#include<stdio.h>
int main()
{
	double sum;
	int cnt;

	sum = 0;
	
	for(cnt = 1; cnt <= 100; cnt++)
	{
		sum += 1.0/cnt; 
	}

	printf("%lf\n",sum);
	return 0;
 } 
 
