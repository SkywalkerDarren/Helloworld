#include<stdio.h>

int main()
{
	char c[1000] = {0};
	gets(c);
	int i, j = 0;
	int other = 0, zimu = 0, shuzi = 0, kongge = 0;
	for(i=0; ; i++){
		if((c[i]>=65&&c[i]<=90)||(c[i]>=97&&c[i]<=122)){
			zimu++;
		}else if(c[i]>='0'&&c[i]<='9'){
			shuzi++;
		}else if(c[i]==' '){
			kongge++;
		}else if(c[i]==0){
			break;
		}else{
			other++;
		}
	}
	printf("%d %d %d %d",zimu,shuzi,kongge,other);
	return 0;
}

