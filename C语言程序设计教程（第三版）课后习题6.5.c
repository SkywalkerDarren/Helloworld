#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	double y,x,z;
	x = y = z = 0;
	for(int i=1; i<=a; i++){
		x += i;
	}
	for(int i=1; i<=b; i++){
		y += pow(i,2);
	}
	for(int i=1; i<=c; i++){
		z += 1.0/i;
	}
	printf("%.2f",x+y+z);
	return 0;
}

