#include<stdio.h>

int main()
{
	int num,sum;
	char sign;
	scanf("%d",&sum);
	printf("%d",sum);
	
	scanf("%c",&sign);
	printf("%c",sign);
	switch(sign){
		case '+':
			scanf("%d",&num);
			printf("%d",num);
			sum+=num;
			break;
		case '-':
			scanf("%d",&num);
			printf("%d",num);
			sum-=num;
			break;
		case '*':
			scanf("%d",&num);
			printf("%d",num);
			sum*=num;
			break;
		case '/':	
			scanf("%d",&num);
			printf("%d",num);
			if(num==0){
				printf(" 0不可做除数\n");
				goto exit;
			}else{
				sum/=num;
			}
		case '\n':
			break;
		default:
 			scanf("%d",&num);
			printf("%d",num);
			printf(" 符号错误\n");
			goto exit;
	}

	printf("=%d",sum);
	exit:
	return 0;
} 
