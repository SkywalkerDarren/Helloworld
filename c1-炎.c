#include<stdio.h>
#include<math.h>
int main ()
{
	float a,b,c,s,area;
	printf("���������������߳�:\n");
	scanf("%f %f %f",&a,&b,&c);
		
	if(c>=(a+b)||a>=(b+c)||b>=(a+c)){
		printf("���ݴ�����ɲ���������\n");
	}else{
		printf("�����γ���\n");	
		
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		
		printf("a=%f\tb=%f\tc=%f\n",a,b,c);
		printf("���������=%f\n",area);
	}
	return 0;
}

