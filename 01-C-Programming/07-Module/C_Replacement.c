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
    
    int b = 0;
        if(arr[i]>0)
        {
            b = 1;   
        }
        else if(arr[i]<0)
        {
            b = 2;
        }
        else if(arr[i]==0)
        {
            b = 0;
        }
        printf("%d ",b);
    }
    return 0;
}