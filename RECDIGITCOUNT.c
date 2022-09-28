#include<stdio.h>
char n[100];int c=0,i=0;
void count(char n[])
{
    if(n[i]!=NULL)
    {
        i++;
        c++;
        count(n);
    }
}
main()
{
    printf("Enter the number ");
    scanf("%s",&n);
    count(n);
    printf("%d",c);
}
