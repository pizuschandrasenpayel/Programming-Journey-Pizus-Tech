#include<stdio.h>
int main()
{
    int Num;
    scanf("%d", &Num);

    if(Num%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    
    return 0;
}