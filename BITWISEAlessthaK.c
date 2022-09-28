#include<stdio.h>
#define p printf
#define s scanf

main()
{
    //int s={1,2,3,4,5,6,7,8,9,10};
    int a,b,k;
    p("Enter the value for b : ");
    s("%d",&b);
    p("Enter the value for k : ");
    s("%d",&k);
    a=a|k;
    p("%d",a);
    a=a^b;
    p("%d",a);
}
