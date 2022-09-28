#include<stdio.h>
main()
{
    int age;
    printf("Enter the age of the candidate : ");
    scanf("%d",&age);
    if(age>=18 && age<60)
    {
        printf("Candidate is valid and can vote ");
    }
    else if(age>60 )
    {
        printf("Candidate is senior and is valid to vote ");
    }
    else
        printf("Candidate is not valid and can not vote ");
}
