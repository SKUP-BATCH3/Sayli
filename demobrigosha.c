#include<stdio.h>
main()
{
    char s[]="abc pqr";
    int l=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
            {
                printf("BRIGOSHA");
                l=i;
            }
        else
            printf("%c",s[i]);
    }
    printf("\nThe string ''BRIGOSHA'' is added at the %d location of the given string ",l);
}
