#include<stdio.h>
int n,s,m;
void sum(int n)
{
    if(n>0)
    {
        m=n%10;
        s=s+m;
        n=n/10;
        sum(n);
    }
}
main()
{
    scanf("%d",&n);
    sum(n);
    printf("%d",s);
}
