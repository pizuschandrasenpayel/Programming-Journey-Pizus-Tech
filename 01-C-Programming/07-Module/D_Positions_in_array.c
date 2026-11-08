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

   for(int i=0; i<t; i++)
   {
        
        if(arr[i]<=10)
        {   
            printf("A[%d] = %d\n",i,arr[i]);
        }

   }
    

    return 0;
}