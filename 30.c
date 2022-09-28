#include<stdio.h>
int n1,n2,r;
main()
{
  printf("%d",triple());
}
int triple()
{
    printf("Enter two integer values : ");
    scanf("%d%d",&n1,&n2);
    if(n1==30 | n2==30)
    {
        return 1;
    }
 //   r=n1+n2;
   else if(n1+n2==30)
   {
       return 1;
    }
    else
        return 0;
}
