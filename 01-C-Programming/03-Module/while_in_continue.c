#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=40)
    {
        if(i==10)
        {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
        
    }
}