#include<stdio.h>
void weishu(int);
void nixu(int);
void fenge(int);
int main()
{
	int num;
	scanf("%d",&num); 
	weishu(num);
	fenge(num);
	nixu(num);
	return 0;
}

void weishu(int num){
	int i;
	for(i=0; num>0; i++){
		num /= 10;
	}
	printf("%d\n",i);
}

void nixu(int num){
	for(; num>0;){
		int k;
		k = num % 10;
		num /= 10;
		printf("%d",k);
		if(num==0){
			printf("\n");
		}
	}
}

void fenge(int num){
	int z;
	for(; num>0;){
		int k;
		k = num % 10;
		num /= 10;
		z *= 10;
		z += k;
	}
	num = z;
	for(; num>0;){
		int k;
		k = num % 10;
		num /= 10;
		printf("%d",k);
		if(num>0){
			printf(" ");
		}else{
			printf("\n");
		}
	}
}
