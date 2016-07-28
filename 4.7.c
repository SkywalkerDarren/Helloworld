#include<stdio.h>
int fact(int num);
int main()
{
	int cnt, i, sum = 0;
	scanf("%d",&cnt);
	for(i = 1; i <= cnt ; i++) sum += fact(i);
	printf("%d",sum);
	return 0;
}
int fact(int num){
	int i , f = 1;
	for(i = 1; i <= num; i++) f *= i;
	return f;
} 
