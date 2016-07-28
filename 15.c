#include<stdio.h>

int main()
{
int j=4;
for ( int i=j; i<=2*j; i++ ) {
    switch ( i/j ) {
    case 0:
    case 1: printf("*"); break;
    case 2: printf("#");
    }
}
	return 0;
}

