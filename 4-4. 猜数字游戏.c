#include<stdio.h>



int main()
{

	int num,times;
	int i=1,guess,exit=0;
//	scanf("%d %d",&num,&times);		//“随机数”，最高猜测次数 
	num = 7; times = 10;
	for(;;){
		for(;i<=times;i++){
			scanf("%d",&guess);		//用户输入的猜测数 
			
			if(guess==num){
				
				if(i==1){	//一次猜中 
					printf("Bingo!\n");
				}else if(i>1&&i<=3){	//2-3内次猜中 
					printf("Lucky You!\n");
				}else if(i>3&&i<=times){	//3-n内次猜中 
					printf("Good Guess!\n");
				}
				//直到输入一个负数才中止游戏 
				for(;;){
					if(guess<0){
						exit=1;
						break;
					}
					scanf("%d",&guess);
				}
				
				if(exit) break;
				
			}else if(guess<0){		//中途输入负数直接中止游戏 
				printf("Game Over\n");
				exit=1;
				break;
			}else if(guess<num){	//数字大小判断 
				printf("Too small\n");
			}else if(guess>num){
				printf("Too big\n");
			}
			
			if(exit) break;
		}
		
		if(exit) break;
		//游戏失败也不结束 除非输入一个负数 （且不再判断大小） 
		scanf("%d",&guess);
		if(guess<0) {
			printf("Game Over\n");
			break;
		}
	}
	return 0;
} 
