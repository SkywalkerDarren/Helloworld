#include<stdio.h>
struct date{
    int year;
	int month;
	int day;

}date1;
int main()
{
	
	while(scanf("%d/%d/%d",&(date1.year),&(date1.month),&(date1.day))!=EOF)
	{
	
	
	       if ((date1.year)%4!=0||(date1.year)%100==0){

			   switch(date1.month){
			   case 1:printf("%d\n",date1.day);break;
               case 2:printf("%d\n",date1.day+31);break;
               case 3:printf("%d\n",date1.day+59);break;
			   case 4:printf("%d\n",date1.day+90);break;
			   case 5:printf("%d\n",date1.day+120);break;
			   case 6:printf("%d\n",date1.day+151);break;
			   case 7:printf("%d\n",date1.day+181);break;
			   case 8:printf("%d\n",date1.day+212);break;
			   case 9:printf("%d\n",date1.day+242);break;
			   case 10:printf("%d\n",date1.day+273);break;
			   case 11:printf("%d\n",date1.day+304);break;
			   case 12:printf("%d\n",date1.day+334);break;
			   }
			   
		   
		   }
		   else  switch(date1.month){
			   case 1:printf("%d\n",date1.day);break;
               case 2:printf("%d\n",date1.day+31);break;
               case 3:printf("%d\n",date1.day+60);break;
			   case 4:printf("%d\n",date1.day+91);break;
			   case 5:printf("%d\n",date1.day+121);break;
			   case 6:printf("%d\n",date1.day+152);break;
			   case 7:printf("%d\n",date1.day+182);break;
			   case 8:printf("%d\n",date1.day+213);break;
			   case 9:printf("%d\n",date1.day+243);break;
			   case 10:printf("%d\n",date1.day+274);break;
			   case 11:printf("%d\n",date1.day+305);break;
			   case 12:printf("%d\n",date1.day+335);
			   
	
			} 
	}
	
		   return 0;
}

