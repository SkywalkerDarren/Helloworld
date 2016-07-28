#include<stdio.h>

int main()
{
	//input
	int i = 0;
	scanf("%d",&i);
	int a[i];
	for(int j = 0; j < i; j++)
	{
		scanf("%d",&a[j]);
	}
	//format
	int maxseqsum, thissum;
	int fst = 0,last = 0;
	maxseqsum = thissum = 0;
	fst = a[0];
	last = a[i - 1];
	int cnt = 0;
	
	for(int j = 0; j < i; j++)
	{
		thissum += a[j];
		if(thissum > maxseqsum)
		{
			maxseqsum = thissum;
			last = a[j];
			fst = a[j - cnt];
			cnt++;
		}else if(thissum == 0){
			fst = last = maxseqsum = 0;
		}else if(thissum < 0){
			thissum = 0;
		}
	}
	printf("%d %d %d",maxseqsum,fst,last);
	return 0;
 } 
