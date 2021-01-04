#include <stdio.h>
#include <math.h>
//Zjisti zda je cislo zaporne/nezaporne nebo nula
int main()
{
    int x;
        printf("Zadejte cislo: ");
        scanf("%d", &x);
    if(x * 1 >= 1)
    {
        printf("Cislo %d je nezaporne", x);
    }
    else if(x * 1 <= -1)
    {
        printf("Cislo %d je zaporne", x);
    }
    else
    {
        printf("Cislo je nula");
    }
}