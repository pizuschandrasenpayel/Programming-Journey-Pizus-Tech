#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);

    //if(a*a == b || b*b==a)
    if(a%b==0 || b%a==0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }

    return 0;
}