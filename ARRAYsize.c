#include<stdio.h>
main()
{
    /*int count=0;
    int a[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        count++;
    }
    printf("%d",count);*/

    int n,e,s;
    printf("Enter the number of elements you want to enter ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&e);
            a[i]=e;
    //        count++;
            //printf("\n%d",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
        //count++;
    }
    s=(sizeof(a)/sizeof(a[0]));
    printf("\n size is %d",s);

}
