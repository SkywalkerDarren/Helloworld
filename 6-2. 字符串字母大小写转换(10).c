#include<stdio.h>

int main()
{
	char c[40],a[40]={0};
	gets(c);
	int i;
	for(i=0;c[i]!='#';i++)
	{		
		if(c[i]>='A'&&c[i]<='Z'){
			a[i]=c[i]+32;
		}else if(c[i]>='a'&&c[i]<='z'){
			a[i]=c[i]-32;
		}else{
			a[i]=c[i];
		}
	}
	printf("%s",a);
	return 0;
}
