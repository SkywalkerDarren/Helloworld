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
	 
	 while((q=strstr(p,"Hi"))!=NULL)  //��������ôʵ�ְ�p�ƶ��ģ�
	 {
	  	strcpy(q,q+i); //�����ǰ�ָ��q�ƶ�
	 }
	 puts(p);  //Ϊʲô�����������ȷ��p
}
