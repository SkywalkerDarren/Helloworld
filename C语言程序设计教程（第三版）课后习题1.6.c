#include<stdio.h>
int max(int a,int b);
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	a=max(max(a,b),c);
	printf("%d",a);
	return 0;
}

int max(int a,int b){
	int z;
	if(a<b){
		z=b;
	}else{
		z=a;
	}
	return z;
}
