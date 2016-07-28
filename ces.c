#include<stdio.h>

int main()
{
	int i,n,j=0;
	for(n=10;n<=31;n++)
	{
		for(i=2;i<=n-1;i=i+1) 
  			if(n%i==0) 
	      		break; 
			if(i>=n)
			{
				j=n+j;
        		printf("%d %d",n,j);
        	}
   }
   
   return 0;
}
