#include<stdio.h>
#include<stdlib.h>

int main(){
	void *p;
	int i;
	i = 0;
	while((p = malloc(100*1024*1024))){
		i++;
	}
	printf("%d00M�ڴ�", i)
	return 0;
} 
