#include <stdio.h>
#include <math.h>
//Printne jestli je cislo sude nebo liche
int main()
    {
    int x;
        printf("\nZadejte cislo: ");
        scanf("%d", &x );
    if (x%2==0)
        printf("%d je cislo sude", x);
    else
        printf("%d je cislo liche", x);
    }