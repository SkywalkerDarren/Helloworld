#include<stdio.h>

int main()
{
	char c[2]={0};		//定义两个字符数 都初始化为0 
	scanf("%s",c);		//输入字符串 （没有 &） 
	
	//第一个字符在a-z之间 且 第二个字符为0（即为单个字符且在a-z之间） 
	if(c[0]>='a'&&c[0]<='z'&&c[1]==0){
		printf("%x %d %c",c[0],c[0],c[0]-32);
	}else{
		printf("ERROR");
	}
	return 0;
}

