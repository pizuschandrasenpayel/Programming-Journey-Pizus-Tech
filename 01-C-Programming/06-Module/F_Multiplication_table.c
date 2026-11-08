#include<stdio.h>
int main()
{
   int num;
   scanf("%d",&num);
   int mul=0;
   for(int i = 1; i<=12;i++)
   {
        mul = num*i;
        printf("%d * %d = %d\n",num,i,mul);
   }
   
    
    return 0;
}