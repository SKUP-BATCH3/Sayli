#include<stdio.h>
main()
{
    int n1,n2,r1,r2;
printf("enter the numbers : ");
scanf("%d%d",&n1,&n2);
r1=n1%5;
r2=n2%5;
if(r1!=r2)
{
    if(n1>n2)
    printf("%d is large",n1);
    else
    printf("%d is larger",n2);
}
else
{
    if(n1==n2)
    return 0;
    else if(n1<n2)
    return n1;
    else
    return n2;
}
}
