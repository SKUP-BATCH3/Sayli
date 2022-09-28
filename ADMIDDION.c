#include<stdio.h>
main()
{
    int math,phy,chem;
    printf("Enter the marks for maths , physics , chemistry ");
    scanf("%d%d%d",&math,&phy,&chem);
    int t=math+phy+chem;
    int tmp=math+phy;
    if(math>=65 & phy>=55 & chem>=50 & t>=190 & tmp>=140 )
        printf("Candidate is Eligible ");
    else
        printf("Candidate is not Eligible ");
}
