#include<stdio.h>
#include<math.h>
int main ()
{
	float a,b,c,s,area;
	printf("请输入三角形三边长:\n");
	scanf("%f %f %f",&a,&b,&c);
		
	if(c>=(a+b)||a>=(b+c)||b>=(a+c)){
		printf("数据错误，组成不了三角形\n");
	}else{
		printf("三角形成立\n");	
		
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		
		printf("a=%f\tb=%f\tc=%f\n",a,b,c);
		printf("三角形面积=%f\n",area);
	}
	return 0;
}

