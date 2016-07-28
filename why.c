#include<stdio.h>
int main()
{  

	int a=1;
	long b=0;
	for(;a<20;a+=2)
	{
		b+=a;
		printf("%ld\n",b);
	}
	return 0;
}

