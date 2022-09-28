#include<stdio.h>
int main()
{
int i;
printf("enter the numbers" );
scanf("%d",&i);

int size;
int a[i];
for(int i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
        printf("%d",a[i]);
    }


size=(sizeof(a)/ sizeof(a[0]));

printf("%d",size);
return 0;
}
















