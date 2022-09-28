#include<stdio.h>
int datenight(int y,int d)
{
    if(y>=8 | d>=8)
    return 2;
    else if(y<=2 | d<=2)
    return 0;
    else
        return 1;
}
main()
{
    int y,d;
    printf("enter the stylishness of you and your date( if u have ) in integer values (0-10) : ");
    scanf("%d%d",&y,&d);
    if(datenight(y,d)==2)
    printf("YES");
    else if(datenight(y,d)==0)
    printf("NO");
    else
    printf("MAYBE");
}
