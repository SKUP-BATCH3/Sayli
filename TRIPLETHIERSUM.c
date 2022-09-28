#include<stdio.h>
int n1,n2,r;
main()
{
    /*
    printf("Enter two integer values : ");
    scanf("%d%d",&n1,&n2);
    if(n1==n2)
    {
        r=n1+n2;
        r=r*3;
        printf("%d",r);
    }
    */
    printf("\nTriple their sum is : %d",triple());
}
int triple()
{
    printf("Enter two integer values : ");
    scanf("%d%d",&n1,&n2);
    if(n1==n2)
    {
        r=n1+n2;
        printf("Sum is : %d ",r);
        r=r*3;
        return r;
    }
}
