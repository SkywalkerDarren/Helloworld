#include<stdio.h>
void nixu(int i,char c[]);
int main()
{
	int cnt;
	char c[1000];
	for(cnt=0;;cnt++){
		scanf("%c",&c[cnt]);
		if(c[cnt]==' '||c[cnt]=='\n')break;
	} 
	cnt--;
	nixu(cnt,c);
	return 0;
}
void nixu(int i,char c[]){
	for(;i>=0;i--){
		printf("%c",c[i]);
	}
}
