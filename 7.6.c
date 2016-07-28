#include<stdio.h>
int len(const char *str);
int main()
{
	int l;
	char str[100] = {0};
	gets(str);
	l = len(str);
	printf("%d\n",l);
	return 0;
}
int len(const char *str)
{
	int i;
	for(i = 0; str[i]; i++);
	return i;
}
