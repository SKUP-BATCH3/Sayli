#include<stdio.h>
int num1,num2,a,b;
int near(int num1,int num2)
{
    if(num1<100)
        a=100-num1;
    else
        a=num1-100;
    if(num2<100)
        b=100-num2;
    else
        b=num2-100;
    if(a<b)
        printf("%d is nearest ",num1);
    else if(a==b)
        return 0;
    else
        printf("%d is nearest ",num2);

   /* if(100-num1 < 100-num2)
    printf("%d is nearest to 100",num1);
    else if(num1==num2)
    return 0;
    else
    printf("%d is nearest to 100",num2);*/
    /*if(num1>num2)
        printf("%d is nearest to 100",num1);
    else if(num1==num2)
        return 0;
    else
        printf("%d is nearest to 100",num2);*/

}
main()
{
    printf("Enter the 2 numbers : ");
    scanf("%d%d",&num1,&num2);
    near(num1,num2);
}
