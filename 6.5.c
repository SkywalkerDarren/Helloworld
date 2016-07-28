#include<stdio.h>
#include<string.h>
void nixu(char str[]);
int main()
{
	
	char str[6] = {0};
	int i;
	gets(str);
	nixu(str);
	puts(str);
	return 0;
}
void nixu(char str[])
{
	char temp[6] = {0};
	int i,j;
	for(i = 0, j = 5; j > -1;)
	{
		if(str[j] == 0) j--;
		else {
			temp[i] = str[j];
			i++,j--;
		}
	}
	temp[i+1] = 0;
	strcpy(str,temp);
}