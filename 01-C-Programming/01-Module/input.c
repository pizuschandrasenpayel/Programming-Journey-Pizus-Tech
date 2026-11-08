#include<stdio.h>
int main()
{
    //intger Type Data er input:
    int a;
    float f;
    char c;

    //scanf("%d", &a);
    //printf("%d", a);

    // one line all data type input:
    scanf("%d %f %c", &a, &f, &c);

    //one line all data type output:
    printf("%d %f %c", a, f, c);

    return 0;
}