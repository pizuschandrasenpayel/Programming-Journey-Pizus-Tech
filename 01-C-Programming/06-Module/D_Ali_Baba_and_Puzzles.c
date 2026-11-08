#include<stdio.h>
int main()
{
   long long int a,b,c,d;
   scanf("%lld %lld %lld %lld", &a,&b,&c,&d);

  long long int m = a + b - c;
  long long int n = a - b + c;
  long long int o = a + b * c;
  long long int p = a * b + c;
  long long int q = a - b * c;
  long long int r = a * b - c;

  if(d == m)
  {
    printf("YES");
  }
  else if(d == n)
  {
    printf("YES");
  }
  else if(d == o)
  {
    printf("YES");
  }
  else if(d == p)
  {
    printf("YES");
  }
  else if(d == q)
  {
    printf("YES");
  }
  else if(d == r)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
    
    return 0;
}