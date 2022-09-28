#include<stdio.h>
main()
{
    int n,sum;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("even numbers are ");
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            printf("  %d",i);
            sum=sum+i;
        }
    }printf("\nsum of these number is %d ",sum);
}
