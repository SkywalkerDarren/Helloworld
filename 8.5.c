#include<stdio.h>
#define N 10

typedef struct _std{
	int num;
	char name[20];
	int score[3];
	double ave;
}STUDENT;

void input(STUDENT* std);
void average(STUDENT* std);
STUDENT max(STUDENT* std);
void print(STUDENT* std, STUDENT a);

int main()
{
	STUDENT std[N],m;
	input(std);
	average(std);
	m = max(std);
	print(std,m);
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

void average(STUDENT* std)
{
	int i,j;
	double ave;
 	for(i = 0; i < N; i++)
 	{
 		for(j = 0, ave = 0; j < 3; j++)
		 {
 			ave += std[i].score[j];
		 }
		 ave /= 3.0;
		 std[i].ave = ave;
	 }
}

STUDENT max(STUDENT* std)
{
	int i,m = 0;
 	for(i = 0; i < N; i++)
 	{
 		if(std[i].ave > std[m].ave) m = i;
	}
	return std[m];
}

void print(STUDENT* std, STUDENT m)
{
	int i;
	printf("\n学号    姓名    平均成绩\n");
 	for(i = 0; i < N; i++)
 	{
		printf("%-8d%-8s%-8.2lf\n",std[i].num,std[i].name,std[i].ave);
	}
	printf("\n最高分学生:\n");
	printf("学号：%d\n姓名：%s\n成绩：%d %d %d\n平均成绩：%.2lf\n",m.num,m.name,m.score[0],m.score[1],m.score[2],m.ave);
}

