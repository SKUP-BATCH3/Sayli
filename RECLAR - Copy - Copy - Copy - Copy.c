#include<stdio.h>
int i=0,max;
void sum(int a[])
{
    if(max<a[i])
    {
        max=a[i];
        i++;
        sum(a);
    }
}
main()
{
    int a[]={10,52,54,23,2};
    max=a[4];
    sum(a);
    printf("%d",max);
}
