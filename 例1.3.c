#include<stdio.h>
int max(int a, int b);
int main()
{
	int age_1, age_2, age_max;
	scanf("%d,%d",&age_1,&age_2);
	age_max = max(age_1,age_2);
	printf("Max is %d\n",age_max);
	return 0;
 } 
 int max(int a, int b)
 {
 	int z;
 	if (a > b) z = a;
 	else  z = b;
 	return z;
 }
