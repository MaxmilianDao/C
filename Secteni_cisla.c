#include <stdio.h>
#include <math.h>
//Secte jednotlive cisla z cisla
int main()    
{    
    int x, y = 0;
    int z;
        printf("Zadejte cislo: ");    
        scanf("%d",&x);
    while(x>0)  
        {    
    z = x % 10;    
    y = y + z;    
    x = x  / 10;    
        }   
        printf("Vysledek je %d", y);
        }   