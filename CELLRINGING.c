#include<stdio.h>
int r,c;
char m[2];
int morning()
{
    printf("Enter 'y' if moms calling otherwise 'n' if not ");
    scanf("%s",&m);
    if(strcmp(m,"y")==0)
    return 1;
    else
    return 0;
}
void asleep()
{
    printf(" not answering the call ");
}
void normal()
{
    printf(" answered the call ");
}

main()
{
    printf("your cellphone is ringing..... ");
    printf("\n 1. Morning ");
    printf("\n 2. Asleep ");
    printf("\n 3. Normally ");
    printf("\n enter the choice : ");
    scanf("%d",&c);
    switch(c)
    {
        case 1: r=morning();
                if(r==1)
                printf("Answered the call ");
                else
                    printf("not answered");
                break;
        case 2:asleep();
        break;
        case 3: normal();
        break;
    }
}
