/*――――――――――――――――头文件――――――――――――――――*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h>

/*――――――――――――――――函数――――――――――――――――*/
void gamestart();
int gameover(int result);

void printmap(int(*data)[4]);

int randomnum();
void creatnewnum(int(*data)[4]);
//控制函数
void up(int(*data)[4], int test);
void down(int(*data)[4]);
void left(int(*data)[4], int test);
void right(int(*data)[4]);
//移动函数
void moveup(int(*data)[4]);
void movedown(int(*data)[4]);
void moveright(int(*data)[4]);
void moveleft(int(*data)[4]);

int cheakmap(int(*data)[4]);
int judgecontinue(int(*data)[4]);

/*――――――――――――――――全局变量――――――――――――――――*/

int grade = 0;

/*――――――――――――――――主程序――――――――――――――――*/
int main()
{
	int result = 1;
	int again = 1;
	gamestart();
	for (; again;)
	{
		//初始化棋盘
		system("cls");
		grade = 0; 
		int data[4][4] = { 0 };
//							1,3,5,6,
//							7,9,10,11,
//							12,13,14,15, 17,19};
//							17,18,};

		int line, row;
		srand((unsigned int)time(NULL));
		for (int times = 0; times < 3; times++) {
			line = rand() % 4;
			row = rand() % 4;
			data[line][row] = ((rand() % 2) + 1) * 2;
		}

		//主体
		for (;;)
		{
			//绘制棋盘
			printmap(data);

			//游戏控制
			for (int correct = 0; correct == 0;)
			{
				char control = _getch();
				switch (control)
				{
				case 'w':up(data, 1);
					correct = 1;
					break;
				case 's':down(data);
					correct = 1;
					break;
				case 'a':left(data, 1);
					correct = 1;
					break;
				case 'd':right(data);
					correct = 1;
					break;
				default:
					correct = 0;
					break;
				}
				fflush(stdin);
			}

			system("cls");

			//检查棋盘是否填满
			result = cheakmap(data);// 0未满  -1胜 1满(负)
			int judge;
			if (result == 0)
			{
				judge = 1;
				creatnewnum(data);//空位置中产生随机数
			}
			else if (result == -1)
			{
				//绘制棋盘并退出
				printmap(data);
				break;
			}
			else if (result == 1)
			{
				judge = judgecontinue(data);
			}

			if (judge == 0)
			{
				printmap(data);
				break;
			}
			

		}
		//判断是否重来
		again = gameover(result);
	}

	return 0;
}

//100%
void gamestart()
{
	printf(
	" \"2048\"\n"
	"游戏玩法：wasd控制数字上下左右移动，数字相同时会合并叠加，当凑够2048时即获胜~~\n"
	"我看好你哦，亲~~\n"
	"	 																by 飞火流星\n"
	);
	_getch();
}

//100%
int gameover(int result)
{
	//判断输赢
	if (result == -1)
	{
		printf("不错 挺猛的\n");
	}
	else if (result == 1)
	{
		printf("挂了吧~~渣渣 23333333333\n");
	}

	//是否重来	
	for (;;)
	{
		printf("亚拉那一卡？ (Y/N):");
		char YN;
		scanf("%c", &YN);
		fflush(stdin);
		if (YN == 'N' || YN == 'n')
		{
			printf("知道你没种 hhhhhhhhhhh\n");
			system("pause");
			return 0;
		}
		else if (YN == 'Y' || YN == 'y')
		{
			return 1;
		}
	}
}

//100%
int randomnum()
{
	int num;
	srand((unsigned int)time(NULL));
	num = ((rand() % 2) + 1) * 2;
	return num;
}

//90%
void creatnewnum(int(*data)[4]) {
	//记录空位置
	int emptylocalline[16] = { 0 };
	int emptylocalrow[16] = { 0 };
	int count = 0;
	int line, row;

	for (line = 0, row = 0; line < 4; line++)
	{
		for (row = 0; row < 4; row++)
		{
			if (data[line][row] == 0)
			{
				emptylocalline[count] = line;
				emptylocalrow[count] = row;
				count++;
			}
		}
	}

	//空位置中产生随机数
	int creattimes = rand() % 3 + 1;//产生个数

	for (int cnt = 0; cnt < creattimes; cnt++)
	{
		int creatlocal = rand() % count;
		line = emptylocalline[creatlocal];
		row = emptylocalrow[creatlocal];
		data[line][row] = randomnum();
	}
}

//100%
void printmap(int(*data)[4])
{
	//整型版
	// printf(	"┌─────┬─────┬─────┬─────┐\n"
	// 		"│          │          │          │          │\n"
	// 		"│          │          │          │          │\n"
	// 		"│%5d     │%5d     │%5d     │%5d     │\n"
	// 		"│          │          │          │          │\n"
	// 		"│          │          │          │          │\n"
	// 		"├─────┼─────┼─────┼─────┤\n"
	// 		"│          │          │          │          │\n"
	// 		"│          │          │          │          │\n"
	// 		"│%5d     │%5d     │%5d     │%5d     │\n"
	// 		"│          │          │          │          │\n"
	// 		"│          │          │          │          │\n"
	// 		"├─────┼─────┼─────┼─────┤\n"
	// 		"│          │          │          │          │\n"
	// 		"│          │          │          │          │\n"
	// 		"│%5d     │%5d     │%5d     │%5d     │\n"
	// 		"│          │          │          │          │\n"
	// 		"│          │          │          │          │\n"
	// 		"├─────┼─────┼─────┼─────┤\n"
	// 		"│          │          │          │          │\n"
	// 		"│          │          │          │          │\n"
	// 		"│%5d     │%5d     │%5d     │%5d     │\n"
	// 		"│          │          │          │          │\n"
	// 		"│          │          │          │          │\n"
	// 		"└─────┴─────┴─────┴─────┘\n",
	// 	data[0][0], data[0][1], data[0][2], data[0][3],
	// 	data[1][0], data[1][1], data[1][2], data[1][3],
	// 	data[2][0], data[2][1], data[2][2], data[2][3],
	// 	data[3][0], data[3][1], data[3][2], data[3][3]);

	//字符型版
	char board[4][4][5] = {0};
	//整型转字符型
	for(int line = 0, row = 0; row < 4; row++)
	{
		for (line = 0; line < 4; line++)
		{
			itoa(data[line][row],board[line][row],10);
		}
	}
	//'0'\0 转 \0
	for(int line = 0, row = 0; row < 4; row++)
	{
		for (line = 0; line < 4; line++)
		{
			if(board[line][row][0] == '0')
			{
				board[line][row][0] = 0;
			}
		}
	}
	//输出棋盘
	printf(	"┌─────┬─────┬─────┬─────┐\n"
			"│          │          │          │          │\n"
			"│          │          │          │          │\n"
			"│%5s     │%5s     │%5s     │%5s     │\n"
			"│          │          │          │          │\n"
			"│          │          │          │          │\n"
			"├─────┼─────┼─────┼─────┤\n"
			"│          │          │          │          │\n"
			"│          │          │          │          │\n"
			"│%5s     │%5s     │%5s     │%5s     │\n"
			"│          │          │          │          │\n"
			"│          │          │          │          │\n"
			"├─────┼─────┼─────┼─────┤\n"
			"│          │          │          │          │\n"
			"│          │          │          │          │\n"
			"│%5s     │%5s     │%5s     │%5s     │\n"
			"│          │          │          │          │\n"
			"│          │          │          │          │\n"
			"├─────┼─────┼─────┼─────┤\n"
			"│          │          │          │          │\n"
			"│          │          │          │          │\n"
			"│%5s     │%5s     │%5s     │%5s     │\n"
			"│          │          │          │          │\n"
			"│          │          │          │          │\n"
			"└─────┴─────┴─────┴─────┘\n",
		board[0][0], board[0][1], board[0][2], board[0][3],
		board[1][0], board[1][1], board[1][2], board[1][3],
		board[2][0], board[2][1], board[2][2], board[2][3],
		board[3][0], board[3][1], board[3][2], board[3][3]);


	printf("Score:%d\n", grade);
}

//100%
void up(int(*data)[4], int test)
{
	moveup(data);

	int line = 0, row = 0;
	//比较与合并 line < 4 && 
	for (row = 0; row < 4; row++)//第一列扫起
	{
		for (line = 0; line < 3; line++)//首行扫起
		{
			if (data[line][row] == data[line + 1][row])//当前行与下一行相等
			{
				data[line][row] = data[line][row] * 2;//当前行值*2
				if (test)
				{
					grade += data[line][row];
				}
				data[line + 1][row] = 0;//当前行取0
			}
		}
	}

	moveup(data);
}

//100%
void down(int(*data)[4])
{
	movedown(data);
	//比较与合并 line != 0 &&
	int line = 3, row = 0;
	for (row = 0; row < 4; row++)//首列扫起
	{
		for (line = 3; line > 0; line--)//末行扫起
		{
			if (data[line][row] == data[line - 1][row])//当前行与上一行相等
			{
				data[line][row] = data[line][row] * 2;//当前行值*2
				grade += data[line][row];
				data[line - 1][row] = 0;//当前行取0
			}
		}

	}
	movedown(data);
}

//100%
void left(int(*data)[4], int test)//左
{
	moveleft(data);

	//比较与合并 && row != 3
	int line = 0, row = 0;
	for (line = 0; line < 4; line++)//首行扫起
	{
		for (row = 0; row < 3; row++)//首列扫起
		{
			if (data[line][row] == data[line][row + 1])//当前列与下一列相等
			{
				data[line][row] = data[line][row] * 2;//当前列值*2
				if (test)
				{
					grade += data[line][row];
				}
				data[line][row + 1] = 0;//当前列取0
			}
		}
	}

	moveleft(data);
}

//100%
void right(int(*data)[4])
{
	moveright(data);

	//合并
	int line = 0, row = 3;
	for (line = 0; line < 4; line++)
	{
		for (row = 3; row > 0; row--)
		{
			if (data[line][row] == data[line][row - 1])
			{
				data[line][row] = data[line][row] * 2;
				grade += data[line][row];
				data[line][row - 1] = 0;
			}
		}
	}

	moveright(data);
}

//100%
void moveup(int(*data)[4]) {
	int line = 0, row = 0;
	int cnt = 0;//计数君

				//先行后列  line < 4 && 
	for (line = 0, row = 0; row < 4; row++)//扫列
	{
		int temp[4] = { 0 };//临时存放
							//扫行
							//存放
		for (line = 0, cnt = 0; line < 4; line++)
		{
			if (data[line][row] != 0)
			{
				temp[cnt] = data[line][row];
				cnt++;
				data[line][row] = 0;
			}
		}
		//取出
		for (line = 0, cnt = 0; line < 4; line++)
		{
			data[line][row] = temp[cnt];
			cnt++;
		}
		//重置
		//line = 0;
	}

}

//100%
void movedown(int(*data)[4]) {
	int line = 0, row = 0;
	int cnt = 0;//计数君

				//先行后列 line >= 0 &&
	for (line = 3, row = 0; row < 4; row++)//扫列
	{
		int temp[4] = { 0 };//临时存放
							//扫行
							//存放
		for (line = 3, cnt = 0; line >= 0; line--)
		{
			if (data[line][row] != 0)
			{
				temp[cnt] = data[line][row];
				cnt++;
				data[line][row] = 0;
			}
		}
		//取出
		for (line = 3, cnt = 0; line >= 0; line--)
		{
			data[line][row] = temp[cnt];
			cnt++;
		}
		//重置
		//line = 0;
	}
}

//100%
void moveleft(int(*data)[4]) {
	int line = 0, row = 0;
	int cnt = 0;//计数君

				//先列后行
	for (line = 0, row = 0; line < 4; line++)//扫行
	{
		int temp[4] = { 0 };//临时存放
							//扫列
							//存放
		for (row = 0, cnt = 0; row < 4; row++)
		{
			if (data[line][row] != 0)
			{
				temp[cnt] = data[line][row];
				cnt++;
				data[line][row] = 0;
			}
		}
		//取出
		for (row = 0, cnt = 0; row < 4; row++)
		{
			data[line][row] = temp[cnt];
			cnt++;
		}
	}
}

//100%
void moveright(int(*data)[4]) {
	int line = 0, row = 0;
	int cnt = 0;//计数君

				//先列后行
	for (line = 0, row = 0; line < 4; line++)//扫行
	{
		int temp[4] = { 0 };//临时存放
							//扫列
							//存放
		for (row = 3, cnt = 0; row >= 0; row--)
		{
			if (data[line][row] != 0)
			{
				temp[cnt] = data[line][row];
				cnt++;
				data[line][row] = 0;
			}
		}
		//取出
		for (row = 3, cnt = 0; row >= 0; row--)
		{
			data[line][row] = temp[cnt];
			cnt++;
		}

	}
}

//90%
//检查棋盘是否填充满
int cheakmap(int(*data)[4])
{
	int line = 0, row = 0;

	//设棋盘初始为满
	int full = 1;

	//判断输赢 (pass)
	for (line = 0, row = 0; line < 4; line++)//扫描行
	{
		for (row = 0; row < 4; row++)//扫描列
		{
			if (data[line][row] == 2048)
			{
				full = -1;
				break;
			}
		}

		if (full == -1)
		{
			break;
		}
	}

	//判断棋盘是否为满
	for (line = 0, row = 0; line < 4 && full != -1; line++)
	{
		for (row = 0; row < 4; row++)
		{
			//若有值为0的格子就退出循环
			if (data[line][row] == 0) {
				full = 0;
				break;
			}
		}

		if (full == 0)
		{
			break;
		}
	}


	if (full == 1)
	{
		return 1;//棋盘已满
	}
	else if (full == 0)
	{
		return 0;//棋盘未满
	}
	else if (full == -1)
	{
		return -1;//胜利
	}
}

//100%
int judgecontinue(int(*data)[4]) 
{
	int judge;

	int temp[4][4];
	for (int line = 0, row = 0; line < 4; line++) {
		for ( row = 0; row < 4; row++)
		{
			temp[line][row] = data[line][row];
		}
	}

	up(temp, 0);
	judge = cheakmap(temp);
	if (judge == 0)
	{
		return  1;//可继续
	}

	left(temp, 0);
	judge = cheakmap(temp);
	if (judge == 0)
	{
		return 1;//可继续
	}

	return 0;//不可继续
}
