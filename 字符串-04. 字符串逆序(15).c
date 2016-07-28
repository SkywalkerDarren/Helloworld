#include<stdio.h>

int main()
{
	char a[80];
	int i;
	for(i=0;a[i]!='\n';i++){
		scanf("%c",&a[i]);
		if(a[i]=='\n')break;
	}
	i--;
	for(;i>=0;i--){
		printf("%c",a[i]);
	}
	return 0;
} 
