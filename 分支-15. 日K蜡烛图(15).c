#include<stdio.h>

int main ()
{
	double o,h,l,c;
	scanf("%lf %lf %lf %lf",&o,&h,&l,&c);
	
	if(c<o){
		printf("BW-Solid");
	}else if(c==o){
		printf("R-Cross");
	}else if(c>o){
		printf("R-Hollow");
	}
	
	if(l<o&&l<c&&h>c&&h>o){
		printf(" with Lower Shadow and Upper Shadow");
	}else if(l<o&&l<c){
		printf(" with Lower Shadow");
	}else if(h>c&&h>o){
		printf(" with Upper Shadow");
	}
	
	return 0;
}
