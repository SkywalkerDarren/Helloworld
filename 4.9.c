#include<stdio.h>
int main()
{
	int num , i, sum;
	for(num = 1; num <= 1000; num++){
		for(i = 1, sum = 0; i < num; i++){
			if(num % i == 0){
				sum += i;	
			}
		}
		if(sum == num){
			printf(" %d :its factors are ",sum);
			for(i = 1; i < num; i++){
				if(num % i == 0){
					printf("%d,",i);	
				}
			}
			printf("\b.\n");
		}
	}
}
