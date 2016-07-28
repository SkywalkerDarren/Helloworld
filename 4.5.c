#include<stdio.h>
int main()
{
	int m, n, a, b;
	scanf("%d %d",&m, &n);
	//最大公约数
	for(a = m; ;a--)
	{
		if(m % a == 0 && n % a == 0) break;
	}
	//最小公倍数
	b = m * n / a;
	printf("最大公约数%d 最小公倍数%d", a, b);
	return 0; 
}

