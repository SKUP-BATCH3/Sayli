#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && b<c)
    printf("true");
    else if(a<=b && b<=c)
    printf("true");
    else
    printf("false");

}
