#include <stdio.h>

int main(){
	char ch;
	int num = 0;
	for(;;){
		for(;;){
			num++;
			scanf("%c",&ch);
			if(ch==' ' || ch=='.')break;
		}
		printf("%d", num-1);
		if(ch!='.')printf(" ");
		num = 0;
		if(ch=='.')break;
	}
	return 0;
}