#include<stdio.h>
int main()
{
int count;
for (count=0;count<10;++count)
{
printf("\n#");
if(count>6)
{
continue;
}
printf("\n%d",count);
}
return 0;
}
