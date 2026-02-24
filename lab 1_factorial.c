#include  <stdio.h>

int main()
{
    int n,i;
    long int f;
    printf("Enter a number \n");
    scanf("%d" , &n);
    f-1;
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    printf("\nFactorial value=%d" ,f);
    return 0;
}