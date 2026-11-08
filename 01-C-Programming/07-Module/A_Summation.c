#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);

   long long int arr[t];
   for(int i = 0; i<t; i++)
   {
        scanf("%lld",&arr[i]);
   }
   
   
   long long int sum = 0;
   for(int i=0; i<t; i++)
   {
            sum +=arr[i];
   }

   if(sum<0)
   {
        sum *= -1;
   }
   printf("%lld\n",sum);

    
    return 0;
}