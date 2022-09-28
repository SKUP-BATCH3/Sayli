#include<stdio.h>
main()
{
    int n,e;
    printf("Enter the number of elements you want to enter ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&e);
            a[i]=e;
    }
    int s=a[0];
    int g=a[n-1];
    for(int i=0;i<n;i++)
    {
            if(s>a[i])
                s=a[i];
            else if(g<a[i])
                g=a[i];
        }
        printf("\nsmall %d",s);
        printf("\ngreater %d",g);
}
