#include<stdio.h>
#include<math.h>
double judge(int a, int b, int c);
void calc(int a, int b, double d);
void calci(int a, int b, double d);
int main()
{
	int a,b,c;
	double answer,d;
	scanf("%d %d %d",&a,&b,&c);
	if(a == 0)
	{
		printf("非二元一次方程\n");
		return 0;
	}

	d = judge(a,b,c);
	if(d > 0.00000001){
		calc(a,b,d);
	}else if(d < -0.00000001){
		calci(a,b,d);
	}else{
		answer = - b / 2 * a;
		printf("%lf\n",answer); 
	}
	return 0;
}

double judge(int a, int b, int c)
{
	double d;
	d = 1.0*b*b-4.0*a*c;
	return d;
}

void calc(int a, int b, double d)
{
	double x1, x2;
	x1 = (-b+sqrt(d))/2*a;
	x2 = (-b-sqrt(d))/2*a;
	printf("x1=%lf x2=%lf\n",x1,x2);
}

void calci(int a, int b, double d)
{
	double p,q;
	p = -1.0*b/2*a;
	q = sqrt(-d)/2*a;
	printf("x1=%lf+%lfi x2=%lf-%lfi\n",p,q,p,q);
}