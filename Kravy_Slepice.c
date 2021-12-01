#include <stdio.h>

int main()
{
    int PH, PN, X, Y, Z;
        printf("Pocet hlav: ");
        scanf("%d", &PH);
        printf("Pocet nohou: ");
        scanf("%d", &PN);
    X = (PN / 2) - PH;
    Y = (X - PH) * (-1);
    Z = PH - Y;
    if (Y >= 1 && Z >= 1) {
        printf("Farmar ma %d slepic a %d krav", Y, Z);
    }
    else {
        printf("Spatne zadany input");
    }
}