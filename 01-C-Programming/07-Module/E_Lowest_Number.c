#include<stdio.h>
#include<limits.h>
int main()
{
   int t;
   scanf("%d", &t);

   int arr[t];
   for(int i = 1; i<=t; i++)
   {
        scanf("%d", &arr[i]);
   }

   int min = INT_MAX;
   int index = 0;
   for(int i = 1; i<=t; i++)
   {
        if(arr[i]<min)
        {
            min = arr[i];
            index = i;
        }
   }
   printf("%d %d",min,index);
    
    return 0;
}