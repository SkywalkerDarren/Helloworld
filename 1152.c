#include<stdio.h>

int main()
{
	double t;
	double k;
	int m,i;
	scanf("%d",&m);
	if(m==1){
		printf("1.000000");
	}else{	
		for(t=1,k=2,i=2; i<=m; k++,i++){
			t -= 1 / ( k * k );
		}
		printf("%f",t);
	}	
	return 0;
}

