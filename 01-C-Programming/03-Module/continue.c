#include<stdio.h>
int main()
{
    for(int i =1; i<=10; i++)
    {
        if(i==5)
        {
            continue; //continue diye condition e thaka condition true hoile ta continue hobe mane oi true value print hower agei aber code loop er incriment/decriment part a chole jabe
        }
        printf("%d", i);
        //printf("Hello\n");
    }

}