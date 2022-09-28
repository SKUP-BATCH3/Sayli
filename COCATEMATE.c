#include<stdio.h>
char c1[20],c2[20];
void with()
{
    printf("\n with \n");
    strcat(c1,c2);
    printf("%s",c1);
}
void without()
{
    printf("\nwithout \n");
    printf("%s",c1);
    printf("%s",c2);
}
main()
{
    scanf("%s%s",&c1,&c2);
    with();
    without();
}

