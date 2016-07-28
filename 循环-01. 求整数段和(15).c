#include<stdio.h> 

int main()
{
	int a,b,sum,i;
	scanf("%d %d",&a,&b);
	
	for(i=1,sum=0;a<=b;a++,i++){
		printf("%5d",a);
		if(i%5==0)printf("\n");
		sum+=a;	
	}
	if(i%5==1){
		printf("Sum = %d",sum);
	}else{
		printf("\nSum = %d",sum);
	}
	return 0;
}
