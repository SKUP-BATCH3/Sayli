#include<stdio.h>
int main()
{
    int count=0;
char a[20];
printf("enter the character\n");
gets(a);
printf("%d",count);
for(int i=0;i<=20;i++)
if(a[i]==','||a[i]=='.'||a[i]=='?'||a[i]=='^')
    count++;
printf("%d",count);
}

