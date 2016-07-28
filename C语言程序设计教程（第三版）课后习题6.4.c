#include<stdio.h>
long long jiecheng(int); 
int main()
{
	long num;
	scanf("%ld",&num);
	long long k = 0;
	for(int i=1; i<=num; i++){
		k += jiecheng(i);
	}
	printf("%lld",k);
	return 0;
}
long long jiecheng(int num){
	long long k = 1;
	for(int i=1; i<=num; i++){
		k *= i;
	}
	return k;
}
