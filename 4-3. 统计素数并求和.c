#include<stdio.h>

int main()
{
	int m,n,i,x=0,j=0,k=0;
	scanf("%d %d",&n,&m);
	n=1;
	for(;n<=m;n++)	//��nѭ����m ö�ٳ����� 
	{
		for(i=2;i*i<n;i++)
		{
			if(n%i==0) 
	      		break;
	    }
		if(i>=n&&n!=1)	//��Ϊ��������� 
		{
			j=n+j;
			k++;
			printf("%d ",n);
		}
		
	}
	printf("%d %d",k,j);
	return 0;
}
