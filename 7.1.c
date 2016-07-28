#include<stdio.h>
void sort(int*pa, int*pb, int*pc);
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	sort(&a,&b,&c);
	printf("%d %d %d",a,b,c);
	return 0;
 }
  
 void sort(int*pa, int*pb, int*pc)
 {
 	int t;
 	if(*pa>*pb)
 	{
 		t = *pa;
 		*pa = *pb;
 		*pb = t;
	 }
	if(*pa>*pc)
 	{
 		t = *pa;
 		*pa = *pc;
 		*pc = t;
	 }
	 if(*pb>*pc)
 	{
 		t = *pb;
 		*pb = *pc;
 		*pc = t;
	 }
 }
