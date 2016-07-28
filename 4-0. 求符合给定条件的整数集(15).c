#include<stdio.h>
int main() {
	int a,i,j,k,count=0;
	scanf("%d",&a);
	for(i=a;i<=a+3;i++){
    	for(j=a;j<=a+3;j++){
         	for(k=a;k<=a+3;k++){
          		if(i!=j&&i!=k&&j!=k){
                 	printf("%d",i*100+j*10+k);
          			count++;
                 	if(count%6==0){
                       	 printf("\n");
                    }else{
                         printf(" ");
                    }	  
           		}
         	}
    	}
  	}
 return 0;
}
