#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10], s2[10];
	int i;
	gets(s1);
	for(i = 0; s1[i] != '\0'; i++)
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';
	puts(s2);
	return 0;
}