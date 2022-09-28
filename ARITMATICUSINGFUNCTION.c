#include<stdio.h>
int n1,n2,n3,n4;
void add()
{
    printf("\nEnter the 1st and 2nd numbers : ");
    scanf("%d%d",&n1,&n2);
    int sum=n1+n2;
    printf("Addition of two numbers is : %d ",sum);
}
void subs(int n1,int n2)
{
    printf("\nEnter the 1st and 2nd numbers : ");
    scanf("%d%d",&n1,&n2);
    int sub=n1-n2;
    printf("Substraction of two numbers is : %d",sub);
}
int mul()
{
    printf("\nEnter the 1st and 2nd numbers : ");
    scanf("%d%d",&n1,&n2);
    int multi=n1*n2;
    printf("Multiplication of two numbers is : %d ",multi);
}
int div(int n1, int n2)
{
    printf("\nEnter the 1st and 2nd numbers : ");
    scanf("%d%d",&n1,&n2);
    int divi=n1/n2;
    printf("Division of two numbers is : %d ",divi);
}
void main()
{
    add();
    subs( n1, n2);
    mul();
    div(n1,n2);
}
