#include <stdio.h>
int main()
{
	int num[5], str[5];
	int i,j;
	for(i = 0; i < sizeof(num)/sizeof(int); i++)
	{
		scanf("%d",&num[i]);
	}
	for(i = 0, j = sizeof(num)/sizeof(int) - 1; i < sizeof(num)/sizeof(int); i++, j--)
	{
		str[j] = num[i];
	}
	for(i = 0; i < sizeof(num)/sizeof(int); i++)
	{
		printf("%d ",str[i]);
	}
	return 0;
}
