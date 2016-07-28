#include <stdio.h>
int main(){
	long long a[2][2];
	int i,j;
	for(i=0;i<2;i++){scanf("%d/%d",&a[i][0],&a[i][1]);	}
	for(i=0;i<2;i++){
		printf("%d/%d\n",a[i][0],a[i][1]);
	}
	return 0;
}
