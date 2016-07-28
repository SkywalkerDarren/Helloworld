#include<stdio.h>
int main()
{
    char ch[5];
	int i = 0;
	
	do{
		scanf("%c",&ch[i]);
		i++;
	}while(ch[i-1] != '\n' && i < 5);
	puts(ch);
	
	scanf("%5s",ch);
	puts(ch);
	 
    return 0;
}
