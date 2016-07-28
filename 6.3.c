#include<stdio.h>
#include<math.h>
int isprime(int num);
int main()
{
	int num;
	scanf("%d",&num);
	if(num<=1)
	{
		printf("error\n");
		return 0;
	}
	if(isprime(num))
	{
		printf("是素数\n");
	}else{
		printf("不是素数\n");
	}

}
int isprime(int num)
{
	int judge = 1,i;
	for(i = 2; i < sqrt(num); i++)
	{
		if(num % i == 0){
			judge = 0;
		}
	}
	return judge;
}