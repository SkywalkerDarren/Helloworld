#include<stdio.h>

int main()
{
	char a[100][100] = {0};
	int i,j;
	
	for(i=0; ;i++){
		
		for(j=0; ;j++){
			
			scanf("%c", &a[i][j]);
			
			if(a[i][j]==' ' || a[i][j]=='\n' || a[i][j]==0){
				break;
			}
		}
		
		if(a[i][j]=='\n' || a[i][j]==0)
		{
			break;
		}
	}
	
	int t = j;
	for(; i>=0; i--){
		for(j=0; j<t; j++){
			printf("%c",a[i][j]);
		}
		if(i!=0){
			printf(" ");
		}else {
			printf("\n");
		}
	}
	
	return 0;	
}

