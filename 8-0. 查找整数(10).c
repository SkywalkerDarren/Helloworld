#include<stdio.h>

int main()
{
	int a[20],cnt,num,i;
	scanf("%d%d",&cnt,&num);
	for(i=0;i<cnt;i++){
		scanf("%d",&a[i]);
	} 
	for(i=0;i<cnt;i++){
		if(num==a[i]){
			printf("%d",i);
			break;
		}
	}
	if(i==cnt){
		printf("Not Found");
	}
	return 0;
}

