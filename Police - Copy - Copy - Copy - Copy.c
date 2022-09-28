#include<stdio.h>
void noticket(int speed)
{
    printf("Speed is %d so  ",speed);
    printf("No Ticket ");
}
void smallticket(int speed)
{
    printf("Speed is %d so  ",speed);
    printf("Small Ticket ");
}
void bigticket(int speed)
{
    printf("Speed is %d so  ",speed);
    printf("Big Ticket ");
}
main()
{
    int speed;
    scanf("%d",&speed);
    if(speed<=60)
    noticket(speed);
    if(speed>=61 & speed<=80)
    smallticket(speed);
    if(speed>=81)
    bigticket(speed);

}
