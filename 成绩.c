#include<stdio.h>
int main()
{
float g;
int c;
scanf("%f",&g);
printf("%f\n",g);
c=g/10; 
switch(c)
{
 case 10:
 case 9 : printf("A\n");break;
 case 8 : printf("B\n");break;
 case 7 : printf("C\n");break;
 case 6 :  printf("D\n");break;
 default : printf("E\n");break;
}
return 0;
}

