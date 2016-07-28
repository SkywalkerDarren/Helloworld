#include<stdio.h>

int main()
{
	int a[20][20];
	int m,n;
	scanf("%d %d",&m,&n);
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int k=0;
	for(i=1;i<m-1;i++){
		for(j=1;j<n-1;j++){
			if(a[i][j]>a[i+1][j]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i][j-1]){
			printf("%d %d %d\n",a[i][j],i+1,j+1); 
			k=1;
			}
		}
	}
	if(k==0){
		printf("None %d %d",m,n);
	}
	return 0;
}


