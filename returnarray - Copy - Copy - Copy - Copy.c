#include<stdio.h>
int* retar(int a[])
{
    return a;
}
main()
{
    int *r;
    int a[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
{ r=retar(a[i]);}
    printf("%d\n",*r);
}
