//Да се намери броя на цифрите в дадено естествено число
#include <stdio.h>
void main ()
{
    int n,count=0,m;
    do
    {
        printf("n=");
        scanf("%d", &n);
    }
    while(n<1);
    m=n;
    while(n>0)
    {
        count++;
        n/=10;
    }
    printf("The count of the numbers is %d in %d", count,m); // taka li e texta
}