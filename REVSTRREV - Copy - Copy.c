#include<stdio.h>
int len;
void rev(char s[],int i)
{
    if(i>=0)
    {
        printf("%c",s[i]);
        i=i-1;
    }
    rev(s,i);
}
main()
{
    char s[]="shri";
    len=strlen(s);
    int i=len-1;
    rev(s,i);
}
/*
 #include<stdio.h>
int len,i=4;
void rev()
{
    char s[]="nivas";
    if(i>=0)
    {
        printf("%c",s[i]);
        i=i-1;
    }
    rev();
}
main()
{
    rev();
}
----------------------------------------------------------------------------------------------------
#include<stdio.h>
int len;
void rev(char s[],int i)
{
    if(i>=0)
    {
        printf("%c",s[i]);
        i=i-1;
    }
    rev(s,i);
}
main()
{
    static char s[]="nivas";
    int len=strlen(s);
     int i=len-1;
    rev(s,i);
}

*/
