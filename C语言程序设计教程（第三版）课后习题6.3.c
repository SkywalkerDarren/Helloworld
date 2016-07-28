#include<stdio.h>

int main()
{
	int n,sum = 0, k = 0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		k *= 10;
		k += 2;
		sum += k;
	} 
	printf("%d",sum);
	return 0;
}

