/*----------------ͷ�ļ�----------------*/
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#include <windows.h>

/*----------------�궨��----------------*/
#define WIDTH 80
#define HEIGHT 25
#define TIME 400

/*----------------�ṹ��----------------*/
struct SNAKE
{
	int x;
	int y;
	struct SNAKE *next;
};

/*----------------����ͷ----------------*/
void Gotoxy(int x,int y);
void Food(struct SNAKE *head);
int Move(struct SNAKE *head);
int Judge(struct SNAKE *head,int x,int y);
struct SNAKE *Link(struct SNAKE *head);
void FreeShe(struct SNAKE *head);
void Gameover(void);
void Print(struct SNAKE *head);

/*----------------ȫ�ֱ���----------------*/
int Fx,Fy;
int score;
int direction;
int Tx,Ty;

/*----------------������----------------*/
int main()
{
	struct SNAKE *head = NULL;
	int temp;
	int times = TIME;
	char m;

	do{
		score = 0;
		direction = 2;
		temp = score;
		times = TIME;
		head = NULL;

		head = (struct SNAKE *)malloc(sizeof(struct SNAKE));
		head -> x = 40;
		head -> y = 13;
		head -> next = NULL;

		Food(head);

		while(1){
			Print(head);
			Sleep(times);
			if(0 == Move(head)){
				FreeShe(head);
				Gameover();
				break;
			}
			if(temp < score){
				Food(head);
				temp = score;
				if(times > 50){
					times -= 10;
				}else if(times > 20){
					times -= 1;
				}else{} 
			}
		}

		do{
			Gotoxy(32,13);
			printf("����һ�飿 Y/N��");
			scanf_s(" %c",&m);
			system("cls");
		}while(m!='Y' && m!='y' && m!='N' && m!='n');
	}while(m == 'Y' || m == 'y');

	return 0;
}

/*----------------��ͼ����----------------*/
void Print(struct SNAKE *head)
{
	int flag = 1;

	while(head != NULL){
		Gotoxy(head -> x,head -> y);
		if(flag == 1){
			printf("��");
		}else if(flag == 2){
			printf("��");
		}else{}

		Gotoxy(Tx,Ty);
		printf(" ");
		flag++;
		head = head -> next;
	}
}

/*----------------�ƶ����ָ��----------------*/
void Gotoxy(int x,int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

/*----------------����ʳ��----------------*/
void Food(struct SNAKE *head)
{
	int flag = 0;
	struct SNAKE *pr = head;

	do{
		srand(GetTickCount());
		Fx = (rand()%40)*2;
		Fy = (rand()%12)*2;
		flag = 0;
		pr = head;
		while(pr!=NULL){
			if(pr->x == Fx && pr->y == Fy){
				flag = 1;
				break;
			}
			pr = pr->next;
		}
	}while(flag==1);
	Gotoxy(Fx,Fy);
	printf("��");
}

/*----------------�����ƶ�----------------*/
int Move(struct SNAKE *head)
{
	char op;
	int tox, toy, flag, temp;

	if(_kbhit()){
		op = _getch();
		switch(op){
			case 'w':
				if(direction != 3)
					direction = 1;
				break;
			case 'd':
				if(direction != 4)
					direction = 2;
				break;
			case 's':
				if(direction != 1)
					direction = 3;
				break;
			case 'a':
				if(direction != 2)
					direction = 4;
				break;
			default:
				break;
		}
	}

	switch (direction){
		case 1:
			toy = (head->y) - 1;
			tox = (head->x);
			break;
		case 2:
			toy = (head->y);
			tox = (head->x) + 2;
			break;
		case 3:
			toy = (head->y) + 1;
			tox = (head->x);
			break;
		case 4:
			toy = (head->y);
			tox = (head->x) - 2;
			break;
		default:
			break;
	}

	flag = Judge(head, tox, toy);

	if(flag == 0){
		return 0;
	}else if(flag == 1){
		head = Link(head);
		score++;
	}else{}
	while(head != NULL){
		temp = head->x;
		head->x = tox;
		tox = temp;

		temp = head->y;
		head->y = toy;
		toy = temp;

		head = head->next;
	}
	return 1;
}

/*----------------ʤ���ж�----------------*/
int Judge(struct SNAKE *head,int x,int y){
	int flag = 1;

	if( x<0 || x>WIDTH-1 || y<0 || y>HEIGHT-1){
		return 0;
	}
	while(head != NULL){
		if(head->next == x && head->y == y && flag !=1){
			return 0;
		}
		flag++;
		if (head -> next == NULL){
			Tx = head -> x;
			Ty = head -> y;
		}
		head = head ->next;
	}
	if(x == Fx && y == Fy){
		return 1;
	}
	return 2;
}

/*----------------��������----------------*/
struct SNAKE *Link(struct SNAKE *head)
{
	struct SNAKE *p,*pr;

	pr = head;
	p = (struct SNAKE *)malloc(sizeof(struct SNAKE));
	if(p == NULL){
		printf("�������󣡣�");
		exit(0);
	}
	if(head == NULL){
		head = p;
	}else{
		while(pr->next != NULL){
			pr = pr->next;
		}
		pr -> next = p;
	}
	p -> x = Fx;
	p -> y = Fy;
	p -> next = NULL;
	return head;
}

/*----------------�����ͷ�----------------*/
void FreeShe(struct SNAKE *head)
{
	struct SNAKE *pr = NULL;

	while(head != NULL){
		pr = head;
		head = head->next;
		free(pr);
	}
}

/*----------------��������----------------*/
void Gameover(void)
{
	system("cls");
	Gotoxy(36,9);
	printf("Gameover");
	Gotoxy(33,10);
	printf("��ķ����ǣ�%d",score);
	Gotoxy(34,11);
	printf("by  �w������");
}