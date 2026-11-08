#include<stdio.h>
int main()
{
    for(int i = 1; i<=100; i++)
    {
        printf("%d\n", i);

        if(i==43)
        {
            break;
        }
        //printf("%d\n", i);
    }

    return 0;
}