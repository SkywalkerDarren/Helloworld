#include<stdio.h>

int main ()
{
	int a,b,s;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if(c!='+'&&c!='-'&&c!='*'&&c!='/'&&c!='%'){	
	printf("ERROR");
	}
	else 
	{
	switch(c)
	{
		case '+':
			s=a+b;
			break;
		case '-':
			s=a-b;
			break;
		case '*':
			s=a*b;
			break;
		case '/':
			s=a/b;
			break;
		case '%':
			s=a%b;
			break;
	} 
	printf("%d",s);
	}
	return 0;
}
