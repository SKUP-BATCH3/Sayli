#include<stdio.h>
main()
{
    char s[]="ShriNivasaN";
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]==strupr(s[i])){
        printf("%c",strlwr(s[i]));}
        else{
        printf("%c",strupr(s[i]));}
    }
}
