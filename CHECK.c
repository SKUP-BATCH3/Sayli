#include<stdio.h>
int num;
int check(int num)
{
    if(num%3==0 | num%7==0)
        //return num;
        printf("multiple of 3 ");
    //else if(num%7==0)
      //  return num; //printf(" multiple of 7 ");
   else
       printf("not multiple ");
}
main()
{
    printf("Enter the number : ");
    scanf("%d",&num);
    check(num));
 /* if(num%3==0)
        printf("multiple of 3 ");
    else if(num%7==0)
        printf(" multiple of 7 ");
    else
        printf("not multiple ");*/
}
