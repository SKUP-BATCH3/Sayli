#include<stdio.h>
main()
{
    int n,row,col;
    scanf("%d%d%d",&n,&row,&col);
    int a[n][row][col];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<row;j++)
        {
            for(int k=0;k<col;k++)
            {
                scanf("%d",&a[i][j][k]);
           //     pr2intf("%d",a[i][j][k]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<row;j++)
        {
            for(int k=0;k<col;k++)
            {
                printf("%d",a[i][j][k]);
            }printf("\n");
        }
    }
    printf("\nSize : %d",sizeof(a));
}
