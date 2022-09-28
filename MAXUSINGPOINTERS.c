#include<stdio.h>
main()
{
    int *p1,*p2;
    int a,b;
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;
    if(*p1>*p2)
    printf(" number 1 is max");
    else
    printf("number 2 is max ");

}
