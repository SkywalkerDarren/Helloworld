#include<stdio.h>
#include<string.h>
void sort(char (*s)[10]);
int main()
{
	char str[3][10];
	int i;
	for(i = 0; i < 3; i++)
	{
		gets(str[i]);
	}
	sort(str);
	printf("\n");
	for(i = 0; i < 3; i++)
	{
		puts(str[i]);
	}
	return 0;
}
void sort(char (*s)[10])
{
	char t[10];
	if(strcmp(s[0],s[1])>0)
	{
		strcpy(t,s[0]);
		strcpy(s[0],s[1]);
		strcpy(s[1],t);
	}
	if(strcmp(s[0],s[2])>0)
	{
		strcpy(t,s[0]);
		strcpy(s[0],s[2]);
		strcpy(s[2],t);
	}
	if(strcmp(s[1],s[2])>0)
	{
		strcpy(t,s[1]);
		strcpy(s[1],s[2]);
		strcpy(s[2],t);
	}
}
