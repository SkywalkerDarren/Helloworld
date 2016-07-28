#include<stdio.h>

int main()
{
	int a,n,i,sum=0,k,x;
	scanf("%d %d",&a,&n);
	x=a;
	for(i=1;i<=n;i++){
		k=a;
		sum+=k;
		a=10*a+x;
	}
	printf("%d",sum);
	return 0;
}
