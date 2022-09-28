#include<stdio.h>
int i=1;
void nat()
{
    if(i<=50){
    printf("\t%d",i);
    i++;
    nat();
    }
}
main()
{
    nat();
}
