#include<stdio.h>
#define p printf
int a,b;
void substring(char s[],int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        p("%c",s[i]);
    }
}
void main()
{
    char s[]="shrinivas";
    p("Enter the start and end location of the string ");
    scanf("%d%d",&a,&b);
    substring(s,a,b);
}
