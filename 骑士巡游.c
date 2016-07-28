//头文件
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
//宏定义
#define WIDTH 7
#define MAX_DIR 8 
//全局变量
int Chessboard[WIDTH][WIDTH] = {0};
int Direction[WIDTH][WIDTH]; 
int Visited[WIDTH][WIDTH][MAX_DIR] = {0};
int Cur_x, Cur_y;
int Step;
int Last_direction;
int var_x[MAX_DIR], var_y[MAX_DIR];
//函数
void init_direction();
void init_status(int x, int y);


void init_direction() {  var_x[0] = -2; var_y[0] = -1;  var_x[1] = -1; var_y[1] = -2;  var_x[2] = 1; var_y[2] = -2;  var_x[3] = 2; var_y[3] = -1;  var_x[4] = 2; var_y[4] = 1;  var_x[5] = 1; var_y[5] = 2;  var_x[6] = -1; var_y[6] = 2;  var_x[7] = -2; var_y[7] = 1; }  
//设置初始状态 
void init_status(int x, int y) {  step = 1;  chessboard[x][y] = step;  step ++;  cur_x = x;  cur_y = y;  direction[x][y] = MAX_DIR; //每个位置都没有选择方向  last_direction = MAX_DIR; //上一次方向也没有  init_direction(); }  
//输出巡游结果 
void print() {  int x, y;   printf(" +");  for (x = 0; x < WIDTH; x++)   printf("----+");  printf("\n");   for (x = 0; x < WIDTH; x++)   {   printf(" |");   for (y = 0; y < WIDTH; y++)     printf("%3d |",chessboard[x][y]);   printf("\n");    printf(" +");   for (y = 0; y < WIDTH; y++)     printf("----+");   printf("\n");  }  }  //判断走这一步是否可行 int is_legal(int x, int y) {  if( x < 0 || x >= WIDTH)   return 0;  if( y < 0 || y >= WIDTH)   return 0;  if( chessboard[x][y] != 0 )   return 0;   return 1; }  
//判断是否遍历完成 
int is_end() {  if( step > WIDTH * WIDTH )   return 1;  else   return 0; }  
//判断是否回到起点 
int is_back_to_start() {  if (step == 1)    return 1;  else    return 0; }  
int select_direction() {  int try_x, try_y, next_x, next_y;  int i,j;  int count,min_dir;   min_dir = MAX_DIR;  last_direction = MAX_DIR;   for( i = 0; i < MAX_DIR; i++ )  {   try_x = cur_x + var_x[i];   try_y = cur_y + var_y[i];    if(is_legal( try_x, try_y ) == 1 && !visited[cur_x][cur_y][i])//找出可选方向最少的方向   {    count = 0;    for( j = 0; j < MAX_DIR; j++ )    {     next_x = try_x + var_x[j]; 
    next_y = try_y + var_y[j];     if(is_legal(next_x, next_y) && !visited[cur_x][cur_y][j])      count ++;    }    if( count < min_dir )    {     last_direction = i;     min_dir = count;    }   }  }   if(last_direction == MAX_DIR)   return 0; //没有方向可选  else   return 1; //有方向可选 }  
void forward() {  // 该位置的这个方向已经试探过了  
	visited[cur_x][cur_y][last_direction] = 1;   cur_x += var_x[last_direction];  cur_y += var_y[last_direction];   chessboard[cur_x][cur_y] = step;  step ++;    direction[cur_x][cur_y] = last_direction;  last_direction = MAX_DIR; }  
void backward() {  
int i;   step --;  chessboard[cur_x][cur_y] = 0;
// 将last_direction置为上一位置到(curr_x, curr_y)所选择的方向  
last_direction = direction[cur_x][cur_y];   //把这个位置的各个方向都置为未访问过  
for( i = 0; i < MAX_DIR; i++ )   visited[cur_x][cur_y][i] = 0;   // 根据这个方向回溯到上一位置，同时回溯到上一位置之后，在上一位置再试探时应该从  // last_direction+1的方向开始。 
 cur_x -= var_x[last_direction];  cur_y -= var_y[last_direction];  }  
 int tourist() {  do   {   if (select_direction())    forward();   else    backward();  }   while (!is_back_to_start() && !is_end());    if (is_back_to_start())   return 0;  else    return 1; }   int main() {  int start_x = 1,start_y = 1;//起始位置坐标 
  printf("棋盘的大小为：%d×%d\n",WIDTH,WIDTH);   printf("请输入起始位置的行列数（两者之间用逗号隔开）：");  scanf("%d,%d",&start_x,&start_y);      init_status( start_x, start_y ); //
  memset(chessboard,0,sizeof(chessboard));    if(tourist())    {       printf("遍历结果如下：\n");       print();    }    else       printf("找不到遍历路径!\n");         system("pause");       return 0; } 