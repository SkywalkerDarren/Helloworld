#include<stdio.h>

int main()
{
	char a[80];
	int s,i;
	for(i=0;;i++){
		scanf("%c",&a[i]);
		if(a[i]=='\n') {
			break;
		}
	}
	scanf("%d",&s);
	

	s %= i;
	i--;
		
	int j;
	for(j=s; j<=i; j++){
		printf("%c",a[j]);
	}
	for(j=0; j<s; j++){
		printf("%c",a[j]);
	}	
	return 0;
}

