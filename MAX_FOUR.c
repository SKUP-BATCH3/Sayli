#include<stdio.h>
#define p printf
#define s scanf
int max_four(int n1,int n2,int n3,int n4)
{
    if( n1>n2 & n1>n3 & n1>n4 )
    return n1;
    else if( n2>n1 & n2>n3 & n2>n4 )
    return n2;
    else if( n3>n1 & n3>n2 & n3>n4 )
    return n3;
    else
    return n4;
}
main()
{
    int n1,n2,n3,n4;
    p("Enter four integer numbers : ");
    s("%d%d%d%d",&n1,&n2,&n3,&n4);
    p("The greatest from the four is : %d",max_four(n1,n2,n3,n4));
}
