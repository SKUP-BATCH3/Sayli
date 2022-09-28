#include<stdio.h>
main()
{
    int row,col,e,el,sum=0;
    printf("Enter the number of rows and columns ");
    scanf("%d%d",&row,&col);
    int a[row][col],b[row][col];
    printf("enter elements for two dimensional array : \n");
    for(int i=0;i<row;i++)
    {
    for(int j=0;j<col;j++)
    {
         printf("\t");
        scanf("%d",&e);
            a[i][j]=e;
    }
    }
    for(int i=0;i<row;i++)
    {
    for(int j=0;j<col;j++)
    {
         printf("\t");
        scanf("%d",&el);
            b[i][j]=el;
    }
    }
    printf("\n");
    for(int i=0;i<row;i++)
    {
    for(int j=0;j<col;j++)
    {
        sum=a[i][j]+b[i][j];

    }
    }   printf("The addition of 2 array is %d",sum);
}
