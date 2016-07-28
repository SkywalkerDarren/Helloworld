#include<stdio.h>
#include<math.h>
int main()
{
	int pn,pm,k=0,j=0;
	scanf("%d %d",&pn,&pm);
	int p,i;
	for(p=1;k<=pm;){
		if(p>2){
			p+=2;
		}else{
			p++;
		}
		
		for(i=3;i<=sqrt(p);i+=2){				
			if(p%i==0) 
	      		break;			
		}
		
		if(i>sqrt(p)){
			k++;
			if(k>=pn&&k<pm){
				j++;
				printf("%d",p);
				if(j%10==0){
					printf("\n");
				}else{
					printf(" ");
				}
			}else if(k==pm){
				printf("%d",p);
			}
		}
	}
	return 0;
}

