//Да се намерят всички делители на дадено естествено число и тетехният брой
#include <stdio.h>
void main ()
{
    int n,i=1,count=0;
    do
    {
        printf("n=");
        scanf("%d", &n);
    }
    while(n<1);
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("Number %d is divisor of %d \n", i,n);
            count++;
        }
        i++;
    }
    printf("The number of the divisors of %d is %d \n", n,count);
}