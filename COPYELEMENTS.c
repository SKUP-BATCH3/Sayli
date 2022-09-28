#include<stdio.h>
main()
{
    int n,e;
    printf("Enter the number of elements you want to enter ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter %d elements for 1st array ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&e);
            a[i]=e;
            b[i]=a[i];
            printf("\t%d ",b[i]);
    }
/*    printf("2nd array \n");
    for(int i=0;i<n;i++)
    {
    b[i]=a[i];
        printf("\t%d",b[i]);
    }*/
}
