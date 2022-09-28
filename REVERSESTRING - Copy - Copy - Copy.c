#include<stdio.h>
char c1[20],c2[20];
void with()
{
    printf("\n with \n");
    strrev(c1);
    printf("%s",c1);
}
void without()
{
    int s=strlen(c1);
    printf("\nwithout \n");
    for(int i=s-1;i>=0;i--)
    printf("%c",c1[i]);
}
main()
{
    scanf("%s",&c1);
    //with();
    without();
}
