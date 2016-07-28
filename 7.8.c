#include<stdio.h>
void sum(char str[],int* da,int* xiao,int* num,int* space,int* other);
int main()
{
	int d,x,n,s,o;
	char str[100];
	gets(str);
	d = x = n = s = o = 0;
	sum(str,&d,&x,&n,&s,&o);
	printf("大写：%d 小写：%d 数字：%d 空格：%d 其他：%d",d,x,n,s,o);
	return 0;
}
void sum(char str[],int* da,int* xiao,int* num,int* space,int* other)
{
	int j;
	for(j = 0; j < 100 && str[j] != '\0'; j++)
	{
		if(str[j] >= 'a' && str[j] <= 'z') (*xiao)++;
		else if(str[j] >= 'A' && str[j] <= 'Z') (*da)++;
		else if(str[j] >= '0' && str[j] <= '9') (*num)++;
		else if(str[j] == ' ') (*space)++;
		else (*other)++;
	}
}