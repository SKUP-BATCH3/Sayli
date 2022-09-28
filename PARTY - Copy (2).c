#include<stdio.h>
int party(int t,int c)
{
    if(t>=5 & c>=5)
    return 1;
    else if(t>=c*c | c>=t*t)
    return 2;
    if(t<=5 | c<=5)
    return 0;


}
main()
{
    int t,c;
    printf("Enter the amount of tea and candy : ");
    scanf("%d%d",&t,&c);
    if(party(t,c)==1)
    printf("GOOD");
    else if(party(t,c)==2)
    printf("GREAT");
    if(party(t,c)==0)
    printf("BAD");

}
