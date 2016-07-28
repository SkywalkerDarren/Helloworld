#include<stdio.h>
int main()
{
	int cnt, pay = 0;
	float ave = 0;
	scanf("%d",&pay);
	for(cnt = 0; pay != -1; cnt++)
	{	
		ave += pay;
		scanf("%d",&pay);
	}
	ave /= cnt;
	printf("%f", ave);
	return 0;
}
