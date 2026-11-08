#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);

   int arr[t];
   for(int i=0;i<t; i++)
   {
        scanf("%d",&arr[i]);
   }

   int x,y;
   scanf("%d %d",&x,&y);
   
   for(int i=t-1; i>=0; i--)
   {
        if(i==x)
        {
            arr[i]=y;
        }
        printf("%d ",arr[i]);
   }
   //printf("%d ",arr[i]);
    
    return 0;
}