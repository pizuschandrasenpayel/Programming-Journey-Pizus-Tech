#include<stdio.h>
int main()
{
    int Taka;
    scanf("%d", &Taka);

    if(Taka >= 100)
    {
        printf("Briyani Khabo");
    }
    else if(Taka >= 50)
    {
        printf("Doi Khabo");
    }
    else if(Taka >= 20)
    {
        printf("Chips Khabo");
    }
    else
    {
        printf("Kicui khabo na");
    }
    return 0;
}