#include<stdio.h>
int max(int n,int m)
{
    if(n>m)
    {
        return n;
    }
    else
    {
        return m;
    }
}
int min(int n,int m)
{
    if(n>m)
    {
        return m;
    }
    else
    {
        return n;
    }
}
int main()
{
    int n,m,ma,mi,mod;
    scanf("%d/%d",&n,&m);
    ma=max(n,m);
    mi=min(n,m);

    while(mi!=0)
    {
        mod=ma%mi;
        ma=mi;
        mi=mod;
    }
    if(ma==1)
    {
        printf("%d/%d",n,m);
    }
    else
    {
        printf("%d/%d",n/ma,m/ma);
    }
    return 0;
}
