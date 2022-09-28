#include<stdio.h>
int size,e;
int a[];
void array(int a[],int size)
{
    printf("enter the elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        printf("\t%d",a[i]);
    }
}
void sequence(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==1 & a[i+1]==2 & a[i+2]==3)
        {
            printf("\n yes its present ");
        }
    }
}
main()
{
printf("enter the size of array : ");
    scanf("%d",&size);
    array(a,size);
    sequence(a,size);
}
