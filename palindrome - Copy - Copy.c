#include<stdio.h>
void main()
{
    int a=151,b,r=0;
    int s=a;
    while(a>0)
    {
        b=a%10;
        r=(r*10)+b;
        a=a/10;

    }
    if(s == r)
    printf(" is palindrome");
    else
    printf(" is not palindrome");


}
