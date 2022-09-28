#include<stdio.h>
int num1,num2,num3,num4,a;
void eo()
{
    printf("without parameters without return type : ");
    printf("\nenter the number : ");
    scanf("%d",&num1);
    if(num1%2==0)
    printf("EVEN");
}
int evod()
{
    printf("\n\nwithout parameters with return type : ");
    printf("\nenter the number : ");
    scanf("%d",&num2);
    if(num2%2==0)
    return 0;
    else
    return 1;
}
int eveodd(int num3)
{
    printf("\n\nwith parameters without return type : ");
    printf("\nenter the number : ");
    scanf("%d",&num3);
    if(num1%2==0)
    printf("EVEN");
}
int evenodd(int num4)
{
    if(num1%2==0)
    return 0;
    else
    return 1;
}
void main()
{
        printf("CASE 1 without parameters without return type : ");
        printf("\n\nCASE 2 without parameters with return type : ");
        printf("\n\nCASE 3 with parameters without return type : ");
        printf("\n\nCASE 4 with parameters with return type : \n\n");
int ch;
    printf("Enter the choice : ");
    scanf("%d",&ch);
    if(ch!=0)
    {
    switch(ch)
    {
        case 1: eo();
                break;
        case 2: a=evod();
                if(a==0);
                printf("EVEN");
                break;
        case 3: a=eveodd(num3);
                if(a==0)
                printf("EVEN");
                break;
        case 4: printf("\n\nwith parameters with return type : ");
                printf("\nenter the number : ");
                scanf("%d",&num4);
                if(evenodd(num4)%2==0)
                printf("EVEN");
                break;
        default: break;
        }
    }
}
