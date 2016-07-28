#include<stdio.h>
int max(int a,int b);
void main()
{
	int a,b,c,z; 
	scanf("%d%d%d",&a,&b,&c);
	z=max(max(a,c),b);
	printf("%d",z);
}
int max(int a,int b){
	return(a>b?a:b);
}
