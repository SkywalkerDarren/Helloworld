#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* back(char *str, char *del, int d, int s);
char* front(char *str, char *del, int d, int s);

int main()
{
	char str[100] = {0};
	char del[100] = {0};
	int d,s;

	for(int i=0;;i++){
		scanf("%c",&str[i]);
		if(str[i]=='\0'||str[i]=='\n'){
			str[i] = '\0';
			s = i;
			break;
		}
	}
	
	for(int i=0;;i++){
		scanf("%c",&del[i]);
		if(del[i]=='\0'||del[i]=='\n'){
			del[i] = '\0';
			d = i;
			break;
		}
	}
	
	char *last = NULL;
	char *head = NULL;
	char *strn = str;

	for(;strstr(strn,del)!=NULL;){
		last = back(strn,del,d,s);
		head = front(strn,del,d,s);
		strn = strcat(head, last);
	}

	printf("%s",strn);

	free(last);
	free(head);

	system("pause");
	return 0;
}

char* back(char *str, char *del, int d, int s){
	char *t = strstr(str,del);
	char *last = (char*)malloc(s);
	strcpy(last, t+d);
	return last;
}

char* front(char *str, char *del, int d, int s){
	char *u = strstr(str,del);
	*u = '\0';
	char *head = (char*)malloc(s);
	strcpy(head, str);
}