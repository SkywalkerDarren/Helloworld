/*----------------头函数----------------*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*----------------函数声明----------------*/
void printmap(int chess[4][4]);
void random(int chess[4][4]);
void check();

void left();
void right();
void up();
void down();

void gamestart();
void gameover();
/*----------------主函数----------------*/
int main()
{
	int chess[4][4] = {0};
	int exit = 0;
	srand(time(NULL));
	gamestart();
	printmap(chess);
	for(;!exit;)
	{
		srand(time(NULL));
		char dir;
		dir = getchar();
	
		switch(dir)
		{
		case 'w':
		case 'W'://up();
		case 's':
		case 'S'://down();
		case 'a':
		case 'A'://left();
		case 'd':
		case 'D':;//right();
		}
	}
	return 0;
}
/*----------------函数调用----------------*/
void gamestart()
{
	printf("2048--by Darren Hanks");
	getchar();
	system("cls");
}

void printmap(int chess[4][4])
{
	printf(	"┌────┬────┬────┬────┐\n"
			"│        │        │        │        │\n"
			"│%4d    │%4d    │%4d    │%4d    │\n"
			"│        │        │        │        │\n"
			"├────┼────┼────┼────┤\n"
			"│        │        │        │        │\n"
			"│%4d    │%4d    │%4d    │%4d    │\n"
			"│        │        │        │        │\n"
			"├────┼────┼────┼────┤\n"
			"│        │        │        │        │\n"
			"│%4d    │%4d    │%4d    │%4d    │\n"
			"│        │        │        │        │\n"
			"├────┼────┼────┼────┤\n"
			"│        │        │        │        │\n"
			"│%4d    │%4d    │%4d    │%4d    │\n"
			"│        │        │        │        │\n"
			"└────┴────┴────┴────┘\n",
			chess[0][0],chess[0][1],chess[0][2],chess[0][3],
			chess[1][0],chess[1][1],chess[1][2],chess[1][3],
			chess[2][0],chess[2][1],chess[2][2],chess[2][3],
			chess[3][0],chess[3][1],chess[3][2],chess[3][3]);
}

void random()
{
	int num,row,line;
	num = (rand() % 2) * 2 + 2;
	row = rand()%4;
	line = rand()%4;
	
}