#include <stdio.h>
#include <math.h>
//Prohodi dve cisla v printu
int main()
{
    int x, y;
        printf("Zadejte dve cisla oddelene mezerou: ");
        scanf("%d %d", &x, &y);
        printf("Puvodni %d-%d \n", x, y);
        printf("Prohozene %d-%d", y , x);
}