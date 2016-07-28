#include<stdio.h>
#include<string.h>
int main()
{
	char str1[5], str2[5], str[10];
	int j, k;
	gets(str1);
	gets(str2);

	for(j = 0; str1[j] != '\0'; j++)
	{
		str[j] = str1[j];
	}
	for(k = 0;str2[k] != '\0'; j++,k++)
	{
		str[j] = str2[k];
	}
	str[j] = '\0';
	puts(str);
	return 0;
}