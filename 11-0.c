#include<stdio.h>
#include<stdlib.h>
int main(){
	double x1,y1,x2,y2;
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	double x,y;

	x = x1 + x2;
	y = y1 + y2;
	if(x<0 && x>-0.05){
		x = 0;
	}
	if(y<0 && y>-0.05){
		y = 0;
	}
	printf("%.1f %.1f\n", x, y);
	system("pause");
	return 0;
}
