#include<stdio.h>
#define N 5

typedef struct _std{
	int num;
	char name[20];
	int score[3];
}STUDENT;

void input(STUDENT* std);
void print(const STUDENT* std);

int main()
{
	STUDENT std[N];
	input(std);
	print(std);
	return 0;
 } 

void input(STUDENT* std){
 	int i,j;
 	for(i = 0; i < N; i++)
 	{
 		scanf("%d %s",&std[i].num,&std[i].name);
 		for(j = 0; j < 3; j++)
		 {
 			scanf("%d",&std[i].score[j]);
		 }
	 }
 }

void print(const STUDENT* std){
 	int i,j;
	printf("学号    姓名    语文    数学    英语\n");
 	for(i = 0; i < N; i++)
 	{
 		printf("%-8d%-8s",std[i].num,std[i].name);
 		for(j = 0; j < 3; j++)
		 {
 			printf("%-8d",std[i].score[j]);
		 }
		printf("\n");
	 }
 }
