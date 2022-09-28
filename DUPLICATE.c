#include<stdio.h>
main()
{
    int n,e,c=0,i=0;
    printf("Enter the number of elements you want to enter ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter %d elements for 1st array ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&e);
            a[i]=e;
    }

    for(i=0;i<n;i++)
    {int j=i+1;
        while(j<n)
        {
            if(a[i]==a[j])
               c++;
                j++;
        }
    }
    printf("%d",c);
    }
