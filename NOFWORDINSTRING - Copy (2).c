#include<stdio.h>
main()
{
    int c=0,n=0,s=0,v=0,con=0,sp=0;
    char ch[20] = "STRING @123";
    for(int i=0;ch[i]!=NULL;i++)
    {
        if(ch[i]>='A' & ch[i]<='Z')
            c++;
        else if(ch[i]>='0' & ch[i]<='9')
            n++;
        else
            s++;
        if(ch[i]=='A' | ch[i]=='E' | ch[i]=='I' | ch[i]=='O' | ch[i]=='U')
            v++;
        else if(ch[i]>='A' & ch[i]<='Z')
            con++;
        if(ch[i]==' ')
            sp++;
    }
    printf("\nTotal number of words : %d",sp+1);
    printf("\nTotal number of alphabets 3:%d",c);
    printf("\nTotal number of digits : %d",n);
    printf("\nTotal number of special characers : %d",s);
    printf("\nTotal number of vowels : %d",v);
    printf("\nTotal number of consoneant : %d\n",con);
}
