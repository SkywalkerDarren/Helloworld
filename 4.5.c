#include<stdio.h>
int main()
{
	int m, n, a, b;
	scanf("%d %d",&m, &n);
	//���Լ��
	for(a = m; ;a--)
	{
		if(m % a == 0 && n % a == 0) break;
	}
	//��С������
	b = m * n / a;
	printf("���Լ��%d ��С������%d", a, b);
	return 0; 
}

