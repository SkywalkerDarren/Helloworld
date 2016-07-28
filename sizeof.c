#include<stdio.h>

int main(){
	char c=77;
	short s=77;
	int i=77;
	long l=77;
	long long ll=77;
	float f=77;
	double d=77;
	long double ld=77;
	
	printf("size of (char)=%d",sizeof(char));
	printf(" ; c = %c\n",c);
	printf("size of (short)=%d",sizeof(short));
	printf(" ; s = %d\n",s);
	printf("size of (int)=%d",sizeof(int));
	printf(" ; i = %d\n",i);
	printf("size of (long)=%d",sizeof(long));
	printf(" ; l = %ld\n",l);
	printf("size of (long long)=%d",sizeof(long long));
	printf(" ; ll = %ld\n",ll);
	printf("size of (float)=%d",sizeof(float));
	printf(" ; f = %f\n",f);
	printf("size of (double)=%d",sizeof(double));
	printf(" ; d = %f\n",d);
	printf("size of (long double)=%d",sizeof(long double));
	printf(" ; ld = %f\n",ld);
	return 0;
}
