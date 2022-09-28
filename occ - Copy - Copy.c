#include<stdio.h>
main()
{
char m;
int c=0,max=0;
    char s[]="booko";
    int i=0,l=strlen(s);
    for(i=0;i<l;i++)
    {
        c=0;
        for(int j=i+1;j<=l;j++)
        {
            if(s[i]==s[j] )
            {
                c++;
                m=s[i];
                if(c>max)
                {
                    max=c;
                }
            }
        }
    }
    printf("%d",max);
}
