#include<stdio.h>

int main()
{
	int i = 0;
	scanf("%d",&i);
	int A[i];
	for(int j = 0; j < i; j++)
	{
		scanf("%d",&A[j]);
	}
	
	int maxseqsum, thissum;
	maxseqsum = thissum = 0;
	for(int j = 0; j < i; j++)
	{
		thissum += A[j];
		if(thissum > maxseqsum)
		{
			maxseqsum = thissum;
		}else if(thissum < 0){
			thissum = 0;
		}
	}
	printf("%d",maxseqsum);
	return 0;
 } 
