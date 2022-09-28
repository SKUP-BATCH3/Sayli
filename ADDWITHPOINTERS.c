#include<stdio.h>
main()
{
    int *ptr1,*ptr2;
    scanf("%d%d",&ptr1,&ptr2);
    printf("VALUE is %d and %d ",ptr1,ptr2);
    int sum=*ptr1+*ptr2;
    printf("%d",sum);


    /*int a=2,b=2;
    ptr1=&a;
    ptr2=&b;
    printf("%d",*ptr1+*ptr2);*/


}
