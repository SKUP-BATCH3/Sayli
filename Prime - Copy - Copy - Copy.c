#include<stdio.h>
void main()
{
    int n,m,f=0;
  //  printf("Enter the number to be checked : ");
   // scanf("%d",&n);
    //m=n/2;
    for(int m=1;m<=100;m++)
    {
    for(int i=2;i<=m;i++)
    {
        if(n%i!= 0)
        {
            printf("\t%d",m);
         }
    }}
}
