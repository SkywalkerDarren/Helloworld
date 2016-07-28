#include<stdio.h>
int max(int,int);
int main()
{
	int a,b,c,m;
	scanf("%d %d %d",&a,&b,&c);
	m = max(max(a,b),c);
	printf("%d",m); 
	return 0;
}
int max(int a,int b){
	return (a>b?a:b);
}

