#include<stdio.h>

int main()
{
    int a,b,c,sum;
    scanf("%d",&a);
    b=1;
    for (c=1;c<=a;c++)
    {
        for (b=1;b<=c;b++)
        {
            printf("%d*%d=%-4d",b,c,c*b);
            if (b==c)
            {
                printf("\n");
            }
        }
    }
    getchar();
    getchar();
    return 0;
}
