#include<stdio.h>

int main()
{
	int a[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			scanf("%d",&a[i][j]);
		}
	} 
	int x,y;
	x = a[0][0]+a[1][1]+a[2][2];
	y = a[0][2]+a[1][1]+a[2][0];
	printf("%d %d",x,y);
	return 0;
}

