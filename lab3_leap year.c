#include <stdio.h>
void main()
{
    int year;
    printf("enter a number=");
    scanf("%d" ,&year);
    
    if((year%4==0||year%400==0)&&year%100!=0)
    {
        printf("\nYear is leap year.");
    }   
    else
    {
        printf("n Year is not leap year.");
    }  
}