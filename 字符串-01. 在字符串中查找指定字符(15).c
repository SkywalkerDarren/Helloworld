#include<stdio.h>

int main()
{
	int i,j,judge=0;
	char a[80];
	char found;
	
	gets(a);
	scanf("%c",&found);
	
	for(i=0;a[i]!='\0';i++){
		if(found==a[i]){
			judge=1;
			for(;a[i]!='\0';i++){
				printf("%c",a[i]);
			}
		}
	}
	
	if(judge==0){
		printf("Not found");
	}
	
	return 0;
}
