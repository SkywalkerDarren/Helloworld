#include<stdio.h>
int main()
{
	int array[3][3] = {0};
	int sum = 0, i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &array[i][j]);
		}
	}
	for(i = 0, j = 0, sum = 0; i < 3; i++, j++){
		sum += array[i][j];
	}
	for(i = 0, j = 2; i < 3; i++, j--){
		sum += array[i][j];
	}
	printf("%d\n",sum);
	return 0;
}