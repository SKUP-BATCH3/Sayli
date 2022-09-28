#include<stdio.h>
main()
{
    char s[]="shrinivasan@123";
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]<='z' & s[i]>='a')
        {
            printf("%c",s[i]);
        }
    }
}
