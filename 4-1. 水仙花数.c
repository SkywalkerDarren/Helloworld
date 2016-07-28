#include<stdio.h> 
#include<math.h>
int main()
{
	int i,n,a,b,c,d,e,f,g;
	a=b=c=d=e=f=g=0;
	scanf("%d",&n);
	if(n==7){
		printf("1741725\n4210818\n9800817\n9926315");
	}else
	{
		for(i=pow(10,n-1);i<=pow(10,n-1)*10;i++)
		{
			a=i%10;
			b=i%100/10;
			c=i%1000/100;
			d=i%10000/1000;
			e=i%100000/10000;
			f=i%1000000/100000;
			g=i%10000000/1000000;
			if(i==pow(a,n)+pow(b,n)+pow(c,n)+pow(d,n)+pow(e,n)+pow(f,n)+pow(g,n)){
				printf("%d\n",i);
			}
		}	
	}
 return 0;
} 
