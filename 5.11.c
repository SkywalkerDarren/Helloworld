#include<stdio.h>
int main()
{
	char star[6] = "*****";
	int i, j;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < i; j++){
			printf(" ");
		}
		puts(star);
		printf("\n");
	}
}