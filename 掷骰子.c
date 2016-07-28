#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main()
{
	srand(time(0));
	//初始化底金，押金	
	int balance,wager;
	balance = 1000;
	wager = -1;	
	//游戏大循环 
	for(int k=0;k==0;){				
		printf("Your balance is %d\n",balance);
		printf("Input your wager:");
		scanf("%d",&wager);		
		//存取垃圾字符用 
		char rubbish;		
		//判断合法的押金 
		for(;;){
			if(wager==-1){
				printf("Input again:");
				scanf("%c",&rubbish);	//扔垃圾 
				scanf("%d",&wager);
			}else if(wager>balance || wager<=0){
				wager = -1;
				printf("Input again:");
				scanf("%d",&wager);
			}else{
				break;
			}
		}		
		//随机数	
		int r1,r2,sum;
		r1 = rand()%6 + 1;
		r2 = rand()%6 + 1;
		sum = r1 + r2;		
		printf("Roll dice......\n");
		printf("You rolled %d + %d = %d\n",r1,r2,sum);		
		//第一轮判断 
		if(sum==7 || sum==11){
			printf("\nYou win\n\n");
			balance += wager;
		}else if(sum==2 || sum==3 || sum==12){
			printf("\nYou lose\n\n");
			balance -= wager;
		}else{			
			//第二轮判断 
			int point;
			point = sum;			
			for(;;){
				r1 = rand()%6 + 1;
				r2 = rand()%6 + 1;
				sum = r1 + r2;
				printf("Roll dice......\n");
				printf("You rolled %d + %d = %d\n",r1,r2,sum);
				
				if(sum==point){
					printf("\nYou win\n\n");
					balance += wager;
					break;
				}else if(sum==7){
					printf("\nYou lose\n\n");
					balance -= wager;
					break;
				}
			}	
		}
		
		//押金再次初始化 
		wager = -1;
		
		printf("Your balance is %d\n",balance);		
		if(balance==0){
			printf("\nGame Over");
			return 0;
		}
		
		//判断游戏进行 
		for(;;){
			
			char yn;
			printf("\nWould you like to play again? (y/n):");
			back:
			scanf("%c",&yn);
			
			if(yn=='y' || yn=='Y'){
				k = 0;
				break;
			}else if(yn=='n' || yn=='N'){
				printf("Thank for play");
				k = 1;
				break;
			}else if(yn=='\n'){
				goto back;
			}else{
				printf("Input again (y/n):");
			}
		}
	}
	system("pause");
	return 0;
}

