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
    int s=a[n-1];
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
  //      printf("\nsmall %d",s);
//        printf("\ngreater %d",g);
}
