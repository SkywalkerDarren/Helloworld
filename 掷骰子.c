#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main()
{
	srand(time(0));
	//��ʼ���׽�Ѻ��	
	int balance,wager;
	balance = 1000;
	wager = -1;	
	//��Ϸ��ѭ�� 
	for(int k=0;k==0;){				
		printf("Your balance is %d\n",balance);
		printf("Input your wager:");
		scanf("%d",&wager);		
		//��ȡ�����ַ��� 
		char rubbish;		
		//�жϺϷ���Ѻ�� 
		for(;;){
			if(wager==-1){
				printf("Input again:");
				scanf("%c",&rubbish);	//������ 
				scanf("%d",&wager);
			}else if(wager>balance || wager<=0){
				wager = -1;
				printf("Input again:");
				scanf("%d",&wager);
			}else{
				break;
			}
		}		
		//�����	
		int r1,r2,sum;
		r1 = rand()%6 + 1;
		r2 = rand()%6 + 1;
		sum = r1 + r2;		
		printf("Roll dice......\n");
		printf("You rolled %d + %d = %d\n",r1,r2,sum);		
		//��һ���ж� 
		if(sum==7 || sum==11){
			printf("\nYou win\n\n");
			balance += wager;
		}else if(sum==2 || sum==3 || sum==12){
			printf("\nYou lose\n\n");
			balance -= wager;
		}else{			
			//�ڶ����ж� 
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
		
		//Ѻ���ٴγ�ʼ�� 
		wager = -1;
		
		printf("Your balance is %d\n",balance);		
		if(balance==0){
			printf("\nGame Over");
			return 0;
		}
		
		//�ж���Ϸ���� 
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

