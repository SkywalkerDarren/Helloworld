#include <stdio.h>
#include <math.h>

int NUM[1000001]={0}; 
int N,M=1,K;

//判断质数
int judge(int k)
{
	for(int i=1;i<k;i++)
	{
		if(k%i==0)return 1;//为合数
	}	
	return 0;//为质数
}

int main()
{
	scanf("%d",&N);

	//均标记为合数
	for(int i=1;i<=N;i++)
	{
		NUM[i] = 0;
	} 

	//2标记为质数（1既不是质数也不是合数）
	NUM[1]=1;
	
	//从2开始判断与标记
	for(int i=2;i<=N;i++)
	{
		if(judge(i))//处理合数
		{
			for(int k=2;k<=N;k++)
			{
				if(i*k>N)break;
				NUM[i*k]=1;
			}
		}	
		else //处理质数
		{
 	        for(int k=1;k<=N;k++)
            {
				if(i*k>N)break;
				NUM[i*k]=1;
			}	 
		}		
	}
	
	//从2开始输出
    for(int i=1;i<=N;i++)
	{
		if(NUM[i])//标记为1的合数
		{
			;//空语句
		}
		else//未被标记的质数
		{
			printf("%d ",i);
		}
	}	

	return 0;
}