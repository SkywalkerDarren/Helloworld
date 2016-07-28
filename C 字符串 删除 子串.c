#include<string.h>
#include<stdio.h>

void main()
{
	 char a[15]="Hi Hillo Hi";
	 char *p=a;
	 char *q;
	 char *temp="Hi";
	 int i;
	 i=strlen(temp);
	 
	 while((q=strstr(p,"Hi"))!=NULL)  //这里是怎么实现把p移动的？
	 {
	  	strcpy(q,q+i); //这里是把指针q移动
	 }
	 puts(p);  //为什么这里能输出正确的p
}
