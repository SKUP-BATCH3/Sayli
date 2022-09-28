#include<stdio.h>
#define p printf

main()
{
    char s[]="ch s sentence";
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!=' ')
        p("%c",s[i]);
        else
        p("\n");
    }
}
