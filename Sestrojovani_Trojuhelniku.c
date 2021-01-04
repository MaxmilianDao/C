#include <stdio.h>
#include <math.h>
//Vyhodnoceni pokud lze sestrojit trojuhlenik
int main(){
    int a, b, c;
    int d = a + b;
    while(1) {
        printf("Zadejte hodnoty: ");
        scanf("%d %d %d", &a, &b, &c);
    if (a <= 0 && b <= 0 && c <= 0) 
        {
        printf("Trojúhelník nelze sestrojit\n");
        }
    if (a < c && b < c && d > c) {
        printf("Trojúhelník lze sestrojit\n");
        }
    else{
        printf("Trojúhelník nelze sestrojit\n");
        }
            }
}