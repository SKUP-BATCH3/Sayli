#include<stdio.h>
int num1,num2,num3,num4;
void square()
{
    printf("without parameters without return type : ");
    printf("\nenter the number : ");
    scanf("%d",&num1);
    printf("Square of %d is %d ",num1,num1*num1);
}
int sq()
{
    printf("\n\nwithout parameters with return type : ");
    printf("\nenter the number : ");
    scanf("%d",&num2);
    return num2*num2;
}
void squ(int num3)
{
    printf("\n\nwith parameters without return type : ");
    printf("\nenter the number : ");
    scanf("%d",&num3);
    printf("Square of %d is %d ",num3,num3*num3);
}
int squa(int num4)
{


    return num4*num4;
}
void main()
{
    square();
    printf("Square of %d is %d ",num2,sq());
    squ(num3);
    printf("\n\nwith parameters with return type : ");
    printf("\nenter the number : ");
     scanf("%d",&num4);
    printf("Square of %d is %d \n",num4,squa(num4));
}
