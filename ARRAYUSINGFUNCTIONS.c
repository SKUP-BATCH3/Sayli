#include<stdio.h>
int size,e;
int a[];
void array(int a[],int size)
{

    printf("enter the elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        printf("%d",a[i]);
    }
}
main()
{
printf("enter the size of array : ");
    scanf("%d",&size);
    array(a,size);
}
