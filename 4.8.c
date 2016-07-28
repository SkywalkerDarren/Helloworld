#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	for(a = 100; a<1000 ;a++) 
	if(pow(a%10,3)+pow(a/10%10,3)+pow(a/100,3) == a) 
	printf("%d ",a);
}
