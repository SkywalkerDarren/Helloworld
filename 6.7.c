#include<stdio.h>
void yuan(char str[],char aeiou[]);
int main()
{
	char str[100] = {0}, aeiou[100] = {0};
	gets(str);
	yuan(str,aeiou);
	puts(aeiou);
	return 0;
}
void yuan(char str[], char aeiou[])
{
	int i,j;
	for(i = 0, j = 0; i < 100 && str[i] != 0; i++)
	{
		if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U')
		{
			aeiou[j] = str[i];
			j++;
		}
	}
}