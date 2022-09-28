#include<stdio.h>
int a=10,b=5;
int sub(int a,int b)
{
    int res=a-b;
    printf("%d",res);
}
int multi(int a,int b)
{
    int res=a*b;
    printf("\n%d",res);
}
int div(int a,int b)
{
    int res=a/b;
    printf("\n%d",res);
}
main()
{
    int (*p)(int,int)=&sub;
    (*p)(a,b);
    int (*p1)(int,int)=&multi;
    (*p1)(a,b);
    int (*p2)(int,int)=&div;
    (*p2)(a,b);

}
