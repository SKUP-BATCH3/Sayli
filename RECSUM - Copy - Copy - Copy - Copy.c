#include<stdio.h>
int i=1,n,sum=0;
void sumn(int n)
{
    if(i<=n){
    sum=sum+i;
    i++;
    sumn(n);
    }
}
main()
{
    //printf("Enter the number : ");
    scanf("%d",&n);
    sumn(n);
    printf("\t%d",sum);
}
