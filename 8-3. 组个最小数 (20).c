#include<stdio.h>

int main()
{
	int a[10]={0};
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	//第一位
	for(i=1;i<10;i++){
		if(a[i]>0){
			printf("%d",i);
			a[i]--;
			break;
		}
	} 
	//其他位数
	for (i=0;i<10;i++){
		for(;a[i]>0;a[i]--){
			printf("%d",i);
		}
	}
	return 0;
}

