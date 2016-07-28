#include<stdio.h>

int plus(int,int,int); 
int minus(int,int,int); 

int main()
{
	int a,b,c; 
	char sign;
	scanf("%d%c%d=%d",&a,&sign,&b,&c)
	return 0;
}

int plus(int a,int b,int c){
	if(a + b == c){
		return 1;
	}else{
		return 0;
	}
}
int minus(int a,int b,int c){
	if(a - b == c){
		return 1;
	}else{
		return 0;
	}
}
