#include<stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	int g,s,b;
	g=num%10;
	s=num/10%10;
	b=num/100;

	for(;b!=0;b--){
		printf("B");
	}
	for(;s!=0;s--){
		printf("S");
	}
	int t,k;
	if(g!=0){
		for(t=0;g!=0;g--){
			t*=10;
			t+=g;
		}
		for(k=0;t!=0;){
			k*=10;
			k+=t%10;
			t/=10;
		}
		printf("%d",k);
	}

	return 0;
} 
