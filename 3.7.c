#include<stdio.h>
int main()
{
	int a[4], i, j, temp;
	for(i = 0; i < 4; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(j = 0; j < 4; j++){
		for(i = 0; i < 3; i++){
			if(a[i]>a[i+1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	
	for(i = 0; i < 4; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
 }
