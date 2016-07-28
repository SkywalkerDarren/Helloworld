#include<stdio.h>
int main()
{
	int num, fig, cnt;
	scanf("%d", &num);
	fig = num;
	for(cnt = 0; num > 0; cnt++){
		num /= 10;
	}
	printf("位数%d,数字是%d,逆序是", cnt, fig);
	num = fig;
	for(;num > 0;)	{
			printf("%d",num % 10);
			num /= 10;
	}
	return 0; 
}
