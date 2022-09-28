#include<stdio.h>
main()
{
    int num;
    printf("Enter the integer number");
    scanf("%d",&num);
    if(num%3==0 & num%5==0)
        printf("FIZZBUZZ");
    else if(num%3==0)
        printf("FIZZ");
    else if(num%5==0)
        printf("BUZZ");
    else
        printf("%d!",num);
}
