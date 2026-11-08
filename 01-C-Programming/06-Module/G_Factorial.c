#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int j = 1; j<=t; j++)
    {
    
        int value;
        scanf("%d",&value);

        long long int fact = 1;
        if(value == 0)
        {
            fact = 1;
        }
        else
        {
            for(int i = 1; i<=value; i++)
            {
                fact = fact*i;
                    
            }
        }
        
        printf("%lld\n",fact);
    }

    return 0;
}