#include <stdio.h>
int main(){
 int num,t;
 scanf("%d",&num);
 
 int n; //��ȡ�İ�λ���� 
 int mask=1;//ȡ��һ������λ 
 
 if (num<0){
  printf("fu ");
  num = -num;
 }
 
 t=num;
 while (t>9){
  t = t/10;
  mask = mask*10;
 }
 
 do{
  n = num/mask;
  switch(n){
   case 0: 
    printf("ling");
    break;
   case 1:
    printf("yi");
    break;
   case 2: 
    printf("er");
    break;   
   case 3: 
    printf("san");
    break;   
   case 4: 
    printf("si");
    break;    
   case 5: 
    printf("wu");
    break;   
   case 6: 
    printf("liu");
    break;   
   case 7: 
    printf("qi");
    break;   
   case 8: 
    printf("ba");
    break;   
   case 9: 
    printf("jiu");
    break;   
  };
  
  //printf("%d ",n);
  num = num % mask;
  mask = mask/10;
  if(mask>0) printf(" ");
 }while(mask>0);
 
 return 0;
}
