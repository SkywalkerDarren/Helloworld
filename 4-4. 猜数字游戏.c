#include<stdio.h>



int main()
{

	int num,times;
	int i=1,guess,exit=0;
//	scanf("%d %d",&num,&times);		//�������������߲²���� 
	num = 7; times = 10;
	for(;;){
		for(;i<=times;i++){
			scanf("%d",&guess);		//�û�����Ĳ²��� 
			
			if(guess==num){
				
				if(i==1){	//һ�β��� 
					printf("Bingo!\n");
				}else if(i>1&&i<=3){	//2-3�ڴβ��� 
					printf("Lucky You!\n");
				}else if(i>3&&i<=times){	//3-n�ڴβ��� 
					printf("Good Guess!\n");
				}
				//ֱ������һ����������ֹ��Ϸ 
				for(;;){
					if(guess<0){
						exit=1;
						break;
					}
					scanf("%d",&guess);
				}
				
				if(exit) break;
				
			}else if(guess<0){		//��;���븺��ֱ����ֹ��Ϸ 
				printf("Game Over\n");
				exit=1;
				break;
			}else if(guess<num){	//���ִ�С�ж� 
				printf("Too small\n");
			}else if(guess>num){
				printf("Too big\n");
			}
			
			if(exit) break;
		}
		
		if(exit) break;
		//��Ϸʧ��Ҳ������ ��������һ������ ���Ҳ����жϴ�С�� 
		scanf("%d",&guess);
		if(guess<0) {
			printf("Game Over\n");
			break;
		}
	}
	return 0;
} 
