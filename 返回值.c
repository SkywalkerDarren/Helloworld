#include<stdio.h>

int main()
{
	char c[2]={0};		//���������ַ��� ����ʼ��Ϊ0 
	scanf("%s",c);		//�����ַ��� ��û�� &�� 
	
	//��һ���ַ���a-z֮�� �� �ڶ����ַ�Ϊ0����Ϊ�����ַ�����a-z֮�䣩 
	if(c[0]>='a'&&c[0]<='z'&&c[1]==0){
		printf("%x %d %c",c[0],c[0],c[0]-32);
	}else{
		printf("ERROR");
	}
	return 0;
}

