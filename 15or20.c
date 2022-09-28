#include<stdio.h>
main()
{
    int a[2]={13,20};
    int i=0;
    while(i<=2)
    {
        if(a[i]==15 | a[i]==20)
        {
            printf("15 or 20 is present in the array ");
            break;
        }
        i++;
    }
}
