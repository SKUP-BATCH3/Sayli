#include<stdio.h>
int(*ptr)(int,int);
void sum(int,int);
void main()
{
int result=0;
int(*ptr)(int,int)=&sum;
result=(*ptr),(5,7);
printf("%d",result);
}
void sum(int a,int b)
{
    a=3,b=7;
int res;
res=a+b;
}
