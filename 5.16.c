#include<stdio.h>
#include<string.h>
void sort(char str[][20]);
int main()
{
	int i;
	char name[10][20];
	for(i = 0; i < 10; i++)
	{
		gets(name[i]);
	}
	sort(name);
	for(i = 0; i < 10; i++)
	{
		puts(name[i]);
	}
	return 0;
}

void sort(char str[][20])
{
	char temp[20];
	int i,j;
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9 - i; j++)
		{
			if(strcmp(str[j],str[j+1]) <= 0)
			{
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	}
}
