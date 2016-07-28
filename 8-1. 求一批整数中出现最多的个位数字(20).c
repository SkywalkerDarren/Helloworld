#include<stdio.h>
int max(int,int);
int main()
{
	//输入 
	int cnt,num[1000];
	scanf("%d",&cnt);
	int i;
	for(i=0;i<cnt;i++)
	{
		scanf("%d",&num[i]);
	} 
	//运算 
	int a[10]={0},k;
	for(i=0;i<cnt;i++)
	{
		for(;num[i]!=0;)
		{
			k=num[i]%10;
			switch(k)
			{
				case 0: a[0]++; break;
				case 1: a[1]++; break;
				case 2: a[2]++; break;
				case 3: a[3]++; break;
				case 4: a[4]++; break;
				case 5: a[5]++; break;
				case 6: a[6]++; break;
				case 7: a[7]++; break;
				case 8: a[8]++; break;
				case 9: a[9]++; break;
			}
			num[i]/=10;
		}
	} 
	//求MAX 
	int c=a[9];
	for(i=9;i>0;i--){
		c=max(c,a[i-1]);
	}
	printf("%d:",c);
	//求MAX的数
	for(i=0;i<10;i++){
		if(c==a[i]){
			printf(" %d",i);
		}
	} 	
	return 0;
}

int max(int a,int b)
{	
	return (a>b?a:b);
}

