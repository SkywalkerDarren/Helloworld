#include<stdio.h>
void sort(char c[], int n);
int main() 
{
	char c[10];
	int i;
	for(i = 0; i < 10; i++)
	{
		scanf("%c",&c[i]);
	}
	sort(c,10);
		for(i = 0; i < 10; i++)
	{
		printf("%c",c[i]);
	}
	return 0;
}
void sort(char c[], int n)
{
	int i,j;
	char t;
	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-1-i; j++)
		{
			if(c[j+1]<c[j])
			{
				t = c[j];
				c[j] = c[j+1];
				c[j+1] = t;
			}
		}
	}
}

