#include<stdio.h>
int main()
{
	double temp;
	scanf("%lf",&temp);
	temp -= 32.0;
	temp = 5.0/9.0*temp; 
	printf("%.2lf",temp);
	return 0;
}
