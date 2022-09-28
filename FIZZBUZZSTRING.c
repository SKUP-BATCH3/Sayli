#include<stdio.h>
main()
{
    char s[5];
    scanf("%s",&s);
    int len=strlen(s);
    if(s[0]=='f' & s[len-1]=='b')
    printf("FIZZBUZZ");
    else if(s[0]=='f')
    printf("FIZZ");
    else if(s[len-1]=='b')
    printf("BUFF");
    else
    printf("String unchanged %s",s);
}
