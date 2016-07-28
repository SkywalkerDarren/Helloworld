#include<stdio.h>
int main()
{
	int count;
	scanf("%d",&count);
	int times,k;
	times=count;
	long int a[10],b[10],c[10];
	long int sum[10];
	for(k=0;count!=0;count--,k++){
		scanf("%ld %ld %ld",&a[k],&b[k],&c[k]);
		sum[k]=a[k]+b[k];
	}

	for(k=0;k<times;k++){
		if(sum[k]>c[k]){
			printf("Case #%d: true\n",k+1);
		}else{
			printf("Case #%d: false\n",k+1);
		}
	}
	return 0;
}
