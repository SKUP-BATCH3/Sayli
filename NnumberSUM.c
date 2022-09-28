//program to find n term and  sum of numbers
#include<stdio.h>
main()
{
int sum=0,n;
printf("Enter the number : ");
scanf("%d",&n);
    printf("the natural numbers are ");
    for(int i=1;i<=n;i++)
    {
        printf("%d\t",i);
    }
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }printf("\n sum is %d\t",sum);
}
