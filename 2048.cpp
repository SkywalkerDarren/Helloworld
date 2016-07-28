/*�D�D�D�D�D�D�D�D�D�D�D�D�D�D�D�Dͷ�ļ��D�D�D�D�D�D�D�D�D�D�D�D�D�D�D�D*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h>

/*�D�D�D�D�D�D�D�D�D�D�D�D�D�D�D�D�����D�D�D�D�D�D�D�D�D�D�D�D�D�D�D�D*/
void gamestart();
int gameover(int result);

void printmap(int(*data)[4]);

int randomnum();
void creatnewnum(int(*data)[4]);
//���ƺ���
void up(int(*data)[4], int test);
void down(int(*data)[4]);
void left(int(*data)[4], int test);
void right(int(*data)[4]);
//�ƶ�����
void moveup(int(*data)[4]);
void movedown(int(*data)[4]);
void moveright(int(*data)[4]);
void moveleft(int(*data)[4]);

int cheakmap(int(*data)[4]);
int judgecontinue(int(*data)[4]);

/*�D�D�D�D�D�D�D�D�D�D�D�D�D�D�D�Dȫ�ֱ����D�D�D�D�D�D�D�D�D�D�D�D�D�D�D�D*/

int grade = 0;

/*�D�D�D�D�D�D�D�D�D�D�D�D�D�D�D�D������D�D�D�D�D�D�D�D�D�D�D�D�D�D�D�D*/
int main()
{
	int result = 1;
	int again = 1;
	gamestart();
	for (; again;)
	{
		//��ʼ������
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

		//����
		for (;;)
		{
			//��������
			printmap(data);

			//��Ϸ����
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

			//��������Ƿ�����
			result = cheakmap(data);// 0δ��  -1ʤ 1��(��)
			int judge;
			if (result == 0)
			{
				judge = 1;
				creatnewnum(data);//��λ���в��������
			}
			else if (result == -1)
			{
				//�������̲��˳�
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
		//�ж��Ƿ�����
		again = gameover(result);
	}

	return 0;
}

//100%
void gamestart()
{
	printf(
	" \"2048\"\n"
	"��Ϸ�淨��wasd�����������������ƶ���������ͬʱ��ϲ����ӣ����չ�2048ʱ����ʤ~~\n"
	"�ҿ�����Ŷ����~~\n"
	"	 																by �ɻ�����\n"
	);
	_getch();
}

//100%
int gameover(int result)
{
	//�ж���Ӯ
	if (result == -1)
	{
		printf("���� ͦ�͵�\n");
	}
	else if (result == 1)
	{
		printf("���˰�~~���� 23333333333\n");
	}

	//�Ƿ�����	
	for (;;)
	{
		printf("������һ���� (Y/N):");
		char YN;
		scanf("%c", &YN);
		fflush(stdin);
		if (YN == 'N' || YN == 'n')
		{
			printf("֪����û�� hhhhhhhhhhh\n");
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
	//��¼��λ��
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

	//��λ���в��������
	int creattimes = rand() % 3 + 1;//��������

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
	//���Ͱ�
	// printf(	"�������������Щ����������Щ����������Щ�����������\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"��%5d     ��%5d     ��%5d     ��%5d     ��\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"�������������੤���������੤���������੤����������\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"��%5d     ��%5d     ��%5d     ��%5d     ��\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"�������������੤���������੤���������੤����������\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"��%5d     ��%5d     ��%5d     ��%5d     ��\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"�������������੤���������੤���������੤����������\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"��%5d     ��%5d     ��%5d     ��%5d     ��\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"��          ��          ��          ��          ��\n"
	// 		"�������������ة����������ة����������ة�����������\n",
	// 	data[0][0], data[0][1], data[0][2], data[0][3],
	// 	data[1][0], data[1][1], data[1][2], data[1][3],
	// 	data[2][0], data[2][1], data[2][2], data[2][3],
	// 	data[3][0], data[3][1], data[3][2], data[3][3]);

	//�ַ��Ͱ�
	char board[4][4][5] = {0};
	//����ת�ַ���
	for(int line = 0, row = 0; row < 4; row++)
	{
		for (line = 0; line < 4; line++)
		{
			itoa(data[line][row],board[line][row],10);
		}
	}
	//'0'\0 ת \0
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
	//�������
	printf(	"�������������Щ����������Щ����������Щ�����������\n"
			"��          ��          ��          ��          ��\n"
			"��          ��          ��          ��          ��\n"
			"��%5s     ��%5s     ��%5s     ��%5s     ��\n"
			"��          ��          ��          ��          ��\n"
			"��          ��          ��          ��          ��\n"
			"�������������੤���������੤���������੤����������\n"
			"��          ��          ��          ��          ��\n"
			"��          ��          ��          ��          ��\n"
			"��%5s     ��%5s     ��%5s     ��%5s     ��\n"
			"��          ��          ��          ��          ��\n"
			"��          ��          ��          ��          ��\n"
			"�������������੤���������੤���������੤����������\n"
			"��          ��          ��          ��          ��\n"
			"��          ��          ��          ��          ��\n"
			"��%5s     ��%5s     ��%5s     ��%5s     ��\n"
			"��          ��          ��          ��          ��\n"
			"��          ��          ��          ��          ��\n"
			"�������������੤���������੤���������੤����������\n"
			"��          ��          ��          ��          ��\n"
			"��          ��          ��          ��          ��\n"
			"��%5s     ��%5s     ��%5s     ��%5s     ��\n"
			"��          ��          ��          ��          ��\n"
			"��          ��          ��          ��          ��\n"
			"�������������ة����������ة����������ة�����������\n",
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
	//�Ƚ���ϲ� line < 4 && 
	for (row = 0; row < 4; row++)//��һ��ɨ��
	{
		for (line = 0; line < 3; line++)//����ɨ��
		{
			if (data[line][row] == data[line + 1][row])//��ǰ������һ�����
			{
				data[line][row] = data[line][row] * 2;//��ǰ��ֵ*2
				if (test)
				{
					grade += data[line][row];
				}
				data[line + 1][row] = 0;//��ǰ��ȡ0
			}
		}
	}

	moveup(data);
}

//100%
void down(int(*data)[4])
{
	movedown(data);
	//�Ƚ���ϲ� line != 0 &&
	int line = 3, row = 0;
	for (row = 0; row < 4; row++)//����ɨ��
	{
		for (line = 3; line > 0; line--)//ĩ��ɨ��
		{
			if (data[line][row] == data[line - 1][row])//��ǰ������һ�����
			{
				data[line][row] = data[line][row] * 2;//��ǰ��ֵ*2
				grade += data[line][row];
				data[line - 1][row] = 0;//��ǰ��ȡ0
			}
		}

	}
	movedown(data);
}

//100%
void left(int(*data)[4], int test)//��
{
	moveleft(data);

	//�Ƚ���ϲ� && row != 3
	int line = 0, row = 0;
	for (line = 0; line < 4; line++)//����ɨ��
	{
		for (row = 0; row < 3; row++)//����ɨ��
		{
			if (data[line][row] == data[line][row + 1])//��ǰ������һ�����
			{
				data[line][row] = data[line][row] * 2;//��ǰ��ֵ*2
				if (test)
				{
					grade += data[line][row];
				}
				data[line][row + 1] = 0;//��ǰ��ȡ0
			}
		}
	}

	moveleft(data);
}

//100%
void right(int(*data)[4])
{
	moveright(data);

	//�ϲ�
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
	int cnt = 0;//������

				//���к���  line < 4 && 
	for (line = 0, row = 0; row < 4; row++)//ɨ��
	{
		int temp[4] = { 0 };//��ʱ���
							//ɨ��
							//���
		for (line = 0, cnt = 0; line < 4; line++)
		{
			if (data[line][row] != 0)
			{
				temp[cnt] = data[line][row];
				cnt++;
				data[line][row] = 0;
			}
		}
		//ȡ��
		for (line = 0, cnt = 0; line < 4; line++)
		{
			data[line][row] = temp[cnt];
			cnt++;
		}
		//����
		//line = 0;
	}

}

//100%
void movedown(int(*data)[4]) {
	int line = 0, row = 0;
	int cnt = 0;//������

				//���к��� line >= 0 &&
	for (line = 3, row = 0; row < 4; row++)//ɨ��
	{
		int temp[4] = { 0 };//��ʱ���
							//ɨ��
							//���
		for (line = 3, cnt = 0; line >= 0; line--)
		{
			if (data[line][row] != 0)
			{
				temp[cnt] = data[line][row];
				cnt++;
				data[line][row] = 0;
			}
		}
		//ȡ��
		for (line = 3, cnt = 0; line >= 0; line--)
		{
			data[line][row] = temp[cnt];
			cnt++;
		}
		//����
		//line = 0;
	}
}

//100%
void moveleft(int(*data)[4]) {
	int line = 0, row = 0;
	int cnt = 0;//������

				//���к���
	for (line = 0, row = 0; line < 4; line++)//ɨ��
	{
		int temp[4] = { 0 };//��ʱ���
							//ɨ��
							//���
		for (row = 0, cnt = 0; row < 4; row++)
		{
			if (data[line][row] != 0)
			{
				temp[cnt] = data[line][row];
				cnt++;
				data[line][row] = 0;
			}
		}
		//ȡ��
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
	int cnt = 0;//������

				//���к���
	for (line = 0, row = 0; line < 4; line++)//ɨ��
	{
		int temp[4] = { 0 };//��ʱ���
							//ɨ��
							//���
		for (row = 3, cnt = 0; row >= 0; row--)
		{
			if (data[line][row] != 0)
			{
				temp[cnt] = data[line][row];
				cnt++;
				data[line][row] = 0;
			}
		}
		//ȡ��
		for (row = 3, cnt = 0; row >= 0; row--)
		{
			data[line][row] = temp[cnt];
			cnt++;
		}

	}
}

//90%
//��������Ƿ������
int cheakmap(int(*data)[4])
{
	int line = 0, row = 0;

	//�����̳�ʼΪ��
	int full = 1;

	//�ж���Ӯ (pass)
	for (line = 0, row = 0; line < 4; line++)//ɨ����
	{
		for (row = 0; row < 4; row++)//ɨ����
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

	//�ж������Ƿ�Ϊ��
	for (line = 0, row = 0; line < 4 && full != -1; line++)
	{
		for (row = 0; row < 4; row++)
		{
			//����ֵΪ0�ĸ��Ӿ��˳�ѭ��
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
		return 1;//��������
	}
	else if (full == 0)
	{
		return 0;//����δ��
	}
	else if (full == -1)
	{
		return -1;//ʤ��
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
		return  1;//�ɼ���
	}

	left(temp, 0);
	judge = cheakmap(temp);
	if (judge == 0)
	{
		return 1;//�ɼ���
	}

	return 0;//���ɼ���
}
