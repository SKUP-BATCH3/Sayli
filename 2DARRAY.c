#include<stdio.h>
main()
{
    int r,c,e;
    printf("Enter the number of rows and columns ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("enter elements for two dimensional array : \n");
    for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++)
    {
         printf("\t");
        scanf("%d",&e);
            a[i][j]=e;
    }
    }
    printf("\nThe two dimensional array is : \n");
    for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++)
    {
        printf("\t%d",a[i][j]);
    }
    printf("\n");
    }
}
