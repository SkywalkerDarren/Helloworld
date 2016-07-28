#include<stdio.h>

int main()
{
	int f,x;
	scanf("%d",&x);
	if(x<1){
		f=x;
	} else if(x>=10){
		f=3*x-11;
	}else{
		f=2*x-1;
	}
	printf("%d",f);
	return 0;
}

