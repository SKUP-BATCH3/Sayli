#include<stdio.h>
main()
{
    int c=0,i=0,b;
    char ch[10];
    scanf("%[^\n]s",&ch);
    //printf("%s",ch);
        /*while(ch[i]!=NULL)
        {
            c++;
            i++;
        }*/
        for(int i=0;ch[i]!=NULL;i++)
        {
            printf(" \n%c",ch[i]);

        }

}
