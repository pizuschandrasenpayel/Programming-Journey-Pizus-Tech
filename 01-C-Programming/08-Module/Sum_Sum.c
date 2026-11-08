#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);

   int arr[t];
   for(int i=0; i<t; i++)
   {
        scanf("%d",&arr[i]);
   }

   int pos = 0;
   int neg = 0;
   for(int i=0; i<t; i++)
   {
        if(arr[i]>0)
        {
            pos +=arr[i];
        }
        else if(arr[i]<0)
        {
            neg +=arr[i];
        }
   }
   printf("%d %d",pos,neg);
    
    return 0;
}