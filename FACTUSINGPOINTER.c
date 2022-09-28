#include<stdio.h>
 void main()
{
    int fact=1,n;
    printf("Enter the number ");
    scanf("%d",&n);
    int *p;
    p=&fact;
    for(int i=1;i<=n;i++)
    {
        *p=*p*i;
    }
    printf("%d",*p);
}
