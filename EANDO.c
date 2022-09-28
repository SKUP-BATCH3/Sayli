#include<stdio.h>
main()
{
    int n,e,even=0,odd=0;
    printf("Enter the number of elements you want to enter ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter %d elements for 1st array ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&e);
            a[i]=e;
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        even =even +a[i];
        else
        odd=odd+a[i];
    }
    printf("Even : %d",even);
    printf("\nOdd : %d",odd);
    //printf("Even : %d",a[i]);
    //printf("\nOdd : %d",a[i]);
    }
