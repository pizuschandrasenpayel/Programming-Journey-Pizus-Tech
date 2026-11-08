#include<stdio.h>
int main()
{
   long long int x,y;
  
   scanf("%lld %lld", &x,&y);

   long long int summation = x + y;
   long long int multiplication = x*y;
   long long int subtraction = x - y;

   printf("%lld + %lld = %lld\n", x,y,summation);
   printf("%lld * %lld = %lld\n", x,y,multiplication);
   printf("%lld - %lld = %lld\n", x,y,subtraction);

    return 0;
}