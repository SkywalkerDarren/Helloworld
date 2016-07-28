#include<stdio.h>
void cpyn(char *cpy, char *str, int n);
int main()
{
	char str[100], cpy[100];
	int n;
	gets(str);
	scanf("%d",&n);
	cpyn(cpy, str, --n);
	puts(cpy);
	return 0;
}
void cpyn(char *cpy, char *str, int n)
{
	char *p = str;
	int i;
	for(i = 0; i < n; i++,p++);
	for(i = 0; *p; p++,i++)
	{
		cpy[i] = *p;
	}
	cpy[i] = 0;
}
