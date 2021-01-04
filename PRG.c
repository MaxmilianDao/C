#include <stdio.h>
#include <math.h>
//ulohy z prg
int main()
{
    int x, y, z, c, v, b;
        printf("Uloha 1, 2 \n");
    for (x = 1; x <= 99; x++)
    {
    if (x % 2 == 1)
        {
        printf("%2i \n", x);
        }
    }
        printf("Uloha 3 \n");
    for (z = 1; z <= 50; z++)
    {
    if (z % 5 == 0)
    {
        printf("%d", z);
    if (z < 50)
        {
        printf("-");
        }
    }
        }
        printf("\n");
        printf("Uloha 4 \n");
    v = 0;
    for (c = 1; c <= 20; c++)
    {
        v = c + v;
    }
        printf("%d \n", v);
        printf("Uloha 6 \n");
    for (b = 0; b < 100; b++)
    if (b % 5 == 0 || b % 7 == 0)
        {
        printf("%i", b);
    if (b <= 95)
        {
        printf("-");
        }
    }
}