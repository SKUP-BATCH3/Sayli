#include<stdio.h>
main()
{
    int row,col,e,el,c=1;
    printf("Enter the number of rows and columns ");
    scanf("%d%d",&row,&col);
    int a[row][col],b[row][col];
    int n=row+col;
    printf("enter elements for 1st array : \n");
    for(int i=0;i<row;i++)
    {
    for(int j=0;j<col;j++)
    {
         printf("\t");
        scanf("%d",&e);
            a[i][j]=e;
    }
    }
     printf("\nenter elements for 2nd array : \n");
     for(int i=0;i<row;i++)
    {
    for(int j=0;j<col;j++)
    {
         printf("\t");
        scanf("%d",&el);
            b[i][j]=el;
    }
    }
    for(int i=0;i<row;i++)
    {
    for(int j=0;j<col;j++)
    {
        if(a[i][j]==b[i][j])
        c++;
    }
    }
    if(c!=1 && c>n)
        printf("\n Matrix is equal ");
        else
        printf("\n Matrix is not equal");
}
