#include<stdio.h>

int main(){
	char c[80]={0};
	int i,j,k;
	gets(c);
	for(i=0;c[i]!='.';i++,k++){
		if(c[i-1]=='.') break;
		for(j=1;c[i]!=' '&&c[i]!='.';j++,i++);
		if(j==1);
		else {
			if(k==0){printf("%d",j-1);}
			else {printf(" %d",j-1);}
			//if(c[i]!='.'||c[i]!=' ')printf(" ");
		}
		j=0;
	}	
	return 0;
}
