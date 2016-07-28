#include<stdio.h>
int main()
{
	int da,xiao,num,space,other,i,j;
	char str[3][81]={0};
	da = xiao = num = space = other = 0;
	for(i = 0; i < 3; i++)
	{
		gets(str[i]);
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 81 && str[i][j] != '\0'; j++)
		{
			if(str[i][j] >= 'a' && str[i][j] <= 'z') xiao++;
			else if(str[i][j] >= 'A' && str[i][j] <= 'Z') da++;
			else if(str[i][j] >= '0' && str[i][j] <= '9') num++;
			else if(str[i][j] == ' ') space++;
			else other++;
		}
	}
	printf("大写：%d 小写：%d 数字：%d 空格：%d 其他：%d",da,xiao,num,space,other);
	
	return 0;
}
