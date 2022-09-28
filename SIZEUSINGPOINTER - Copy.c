#include<stdio.h>
main()
{
    char a[]="Ms chandrakala reddy";
    int *p;
    p=&a;
    int size=strlen(p);
    printf("SIze is %d",size);
}
