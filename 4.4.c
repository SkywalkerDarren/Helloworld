#include<stdio.h>
int peach(int n);
int main()
{
	int pea, day;
	scanf("%d", &day);
	for(pea = 1;day>1;day--)
	{
		pea += 2*(day + 1);
	}
	printf("%d",pea);
	return 0;
}