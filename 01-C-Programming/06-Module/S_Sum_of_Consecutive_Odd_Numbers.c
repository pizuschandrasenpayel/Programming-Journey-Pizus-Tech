#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k = 1; k<=t; k++)
    {
        int x,y;
        scanf("%d %d",&x,&y);

        if(x>y)
        {
            long long int sum = 0;
            for(int i = x-1; i>y ; i--)
            {
                
                if(i%2==1)
                {
                    sum = sum + i;
                }
                
            }
            printf("%lld\n",sum);
        }
        else
        {
            long long int sum = 0;
            for(int j = x+1; j<y ; j++)
            {
                
                if(j%2==1)
                {
                    sum = sum + j;
                }
            }
            printf("%lld\n",sum);
        }
    
    }


    return 0;
}