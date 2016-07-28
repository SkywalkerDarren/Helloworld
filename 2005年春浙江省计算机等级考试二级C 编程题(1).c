#include<stdio.h>
#include<math.h>
int main()
{
	double x;
	scanf("%f",&x);
	if(x<0){
		x = fabs(x);
	}else if(x>=0&&x<2){
		x = sqrt(x+1);
	}else if(x>=2&&x<4){
		x = pow(x+2,3);
	}else if(x>=4){
		x = 2*x+5;
	}
	printf("%.2f",x);
	return 0;
}

