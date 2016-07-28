#include<stdio.h>
#include<stdlib.h>
 struct list
 	{
 		char name[10];
 		char date[11];
 		char sex[2];
 		char num[17];
 		char phone[17];
 	};

 int main(){
 
 	int i;
 	scanf("%d",&i);
 	struct list people[i];

 	for(int j=0; j<i; j++){
 		scanf("%s",&people[j].name);
 		scanf("%s",&people[j].date);
 		scanf("%s",&people[j].sex);
 		scanf("%s",&people[j].num);
 		scanf("%s",&people[j].phone);
 	}

 	int lim;
 	scanf("%d",&lim);
 	int mark[100] = {0};
 	for(int l=0;l<lim;l++){
 		scanf("%d",&mark[l]);
 	}

 	for(int m=0;m<lim;m++){
 		int t = mark[m];
 		if(t<i && t>=0){
 			printf("%s ", people[t].name);
 			printf("%s ", people[t].num);
 			printf("%s ", people[t].phone);
 			printf("%s ", people[t].sex);
 			printf("%s\n",people[t].date);
 		}else{
 			printf("Not Found\n");
 		}

 	}
	system("pause");
 	return 0;
 }