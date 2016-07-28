#include<stdio.h>
#include<string.h>

int main(){
	char a[80];
	scanf("%s",a);
	char find;
	scanf("%c",&find);
	
	int k = strlen(a);
	int j = 0;
	int i;
	for(i=0; i<=k; i++){
		if(a[i]==find){
			j = 1;
			break;
		}
	}
	
	if(j==1){
		for(;i<=k ;i++){
			printf("%c",a[i]);
		}
	}else{
		printf("Not Found");
	}
	
	return 0;
}