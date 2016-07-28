#include<stdio.h>
int main()
{
	int g,s,b,q,n;
	for(n=1000;n<=9999;n++)
	{
		g=n%10;
		s=n%100/10;
		b=n%1000/100;
		q=n/1000;

		if(n==g*g*g*g+s*s*s*s+b*b*b*b+q*q*q*q)
		printf("%d\n",n);
	}
	return 0;
}

