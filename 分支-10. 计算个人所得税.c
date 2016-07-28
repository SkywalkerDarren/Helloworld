#include <stdio.h>
int main()
{
	int b,d,e;
	double a;
	scanf("%lf %d", &a,&b);
   		e = b/5;
    
	if (a<=3){
		d = 10 + e*2;
		printf("%d",d);
	}
	else if (3<a<=10){
		d = 10+(a-3)*2 +e*2 +0.5;
		printf ("%d",d);
	}
	else {
		d = 24 +(a-10)*3 +e*2 +0.5;
   		printf ("%d",d);
	}
return 0;
}
