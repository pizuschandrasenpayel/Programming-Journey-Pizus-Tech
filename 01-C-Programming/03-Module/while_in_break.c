#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=20)
    {
        printf("%d\n", i);
        if(i==7)
        {
            break;
        }
        i++;
    }
}