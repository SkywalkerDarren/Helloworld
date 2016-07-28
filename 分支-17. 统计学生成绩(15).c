#include<stdio.h>

int main()
{
	int cnt,i;
	int temp;
	int score,grade;
	int a,b,c,d,e;
	a=b=c=d=e=0;
	scanf("%d",&cnt);
	for(i=1;i<=cnt;i++){
		scanf("%d",&score);
		temp=score/10;
		switch(temp){
			case 10:
			case 9:
				a++;
				break;
			case 8:
				b++;
				break;
			case 7:
				c++;
				break;
			case 6: 
				d++;
				break;
			default:
				e++;
				break;
		}
				
	} 
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}

