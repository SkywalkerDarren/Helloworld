#include<stdio.h>
int main()
{
	int array[5] = {0};
	int temp[6] = {0};
	int num, i, j;
	for(i = 0; i < 5; i++)
	{
		scanf("%d",&array[i]);
	}
	scanf("%d",&num);
	for(i = 0, j = 0; i < 5; i++, j++)
	{
		if(array[i] < num){
			temp[j] = array[i];
		}else{
			temp[j] = num;
			j++;
			break;
		}
	}
	for(;j<6;j++,i++){
		temp[j] = array[i];
	}
	for(j = 0; j < 6; j++)
	{
		printf("%d ",temp[j]);
	}
	return 0;
}