#include<stdio.h>

int main ()
{
	double km,pay1;
	int min,pay2;
	scanf("%lf %d",&km,&min);
	
	if(km<=3){
		pay1=10;
	}else if(km<=10){
		pay1=(km-3)*2+10;
	}else if(km>10){
		pay1=(km-10)*3+24;
	}
	
	if(min<5){
		pay2=0;
	}else{
		pay2=min/5*2;
	}
	
	printf("%.0f",pay1+pay2);
	
	return 0;
}
