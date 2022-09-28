#include<stdio.h>
int num1,num2,a,b;
int near()
{
    if(num1<13 & num2<13)
    {
        a=13-num1;
        b=13-num2;
        if(a>b)
            printf("%d is nearest",a);
        else
            printf("%d is nearest",b);
    }
    else
        return 0;
}
main()
{
    printf("Enter the 2 numbers : ");
    scanf("%d%d",&num1,&num2);
    near();
}
