#include<stdio.h>

int main()
{
	int money;
	printf("商品总值：");
	scanf("%d",&money);
	int price;
	printf("您支付的数额：");
	scanf("%d",&price);
	printf("找您%d元",-(money-price));
	
	return 0;
} 
