#include<stdio.h>
#include"democ2.c"
extern int b;
void main()
{
     int a=5;
    printf("a is %d ",a);
    printf("b is %d ",b);
    printf("ans is %d ",a-b);
}
