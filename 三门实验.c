#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int win;
	int lose;
	for(int i=1;i<10000;i++){
		// make door
		int car = rand() % 3;
		int door[3] = {0};
		door[car] = 1;

		// select door
		int select;
		select = rand() % 3; 

		// sheep door
		int sheep = car;
		do{
			sheep = rand() % 3;
		}while(sheep==car || sheep==select);

		// change door
		int newselect;
		do{
			newselect = rand() % 3;
		}while(newselect==select || newselect==sheep);

		// win or lose
		if(door[newselect]==0){
			lose++;
		}else if(door[newselect]==1){
			win++;
		}
		
		// int k;
		// do{
		// 	k = rand() % 3;
		// 	if(k!=sheep){
		// 		if(door[k]==1){
		// 			win++;
		// 		}else if(door[k]==0){
		// 			lose++;
		// 		}
		// 	}
		// }while(k==sheep);
	}
	printf("win=%d\nlose=%d\n",win,lose);
	return 0;
}