# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int main()
{
	char ch;
	int select = 0;
	char spe[] = {'!','@','#','$','%','^','&','*','(',')','_','+','|','{',':','"','<','>','?','}','[',';','\'','.','/',']','`','~'};
	int max = sizeof(spe);

	printf("???λ????");
	int num;
	scanf("%d",&num);
	fflush(stdin);

	printf("??????????yn??");
	char yn;
	//do{
		scanf("%c",&yn);
//	}while(yn != 'y' || yn != 'n' || yn != 'Y' || yn != 'N');
	fflush(stdin);
	
	int k = 4;
	if(yn == 'n' || yn == 'N')	k-1;

	srand(time(0));

	for(int i=0;i<num;i++)
	{
		int t;
		select = rand() % k;
		switch(select)
		{
			case 0:
				ch = rand() % ('9'-'0') + '0';
				printf("%c",ch);
				break;
			case 1:
				ch = rand() % ('Z'-'A') + 'A';
				printf("%c",ch);
				break;
			case 2:
				ch = rand() % ('z'-'a') + 'a';
				printf("%c",ch);
				break;
			case 3:
				t = rand() % max;
				printf("%c",spe[t]);
				break;
		}
		
	}
	return 0;
}