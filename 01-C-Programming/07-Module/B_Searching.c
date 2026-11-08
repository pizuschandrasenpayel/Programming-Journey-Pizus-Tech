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

   int n;
   scanf("%d",&n);
   int index = -1;
   
   for(int i=0; i<t; i++)
   {

        if(arr[i]==n)
        {
            index = i;
            break;
        }
   }
   printf("%d",index);
    
    return 0;
}