#include<stdio.h>
int main()
{
	int alp = 0, num = 0, sign = 0;
	char c;
	c = getchar();
	for(; c != '\n';)
	{
		if((c >= 65 && c <= 90)||(c >= 97 && c <= 122)) alp++;
		else if(c >= 48 && c <= 57) num++;
		else sign++;
		c = getchar();
	}
	printf("��ĸ��%d ������%d ������%d",alp ,num ,sign);
	return 0;
 } 
