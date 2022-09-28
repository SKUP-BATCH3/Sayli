#include<stdio.h>
int n1,n2,s;
int range()
{
    s=n1+n2;
    //((s<=20 & s>=10)?30:s);
    if(s<=20 & s>=10)
    return 30;
    else
    return s;
}
main()
{
    printf("Enter the numbers");
    scanf("%d%d",&n1,&n2);
    printf("%d",range());

}
