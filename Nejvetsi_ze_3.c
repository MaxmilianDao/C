#include <stdio.h>
#include <math.h>
//Porovna cisla a printne nejvetsi z trech zadanych
int main()
    {
    int x, y, z;
        printf("Zadejte tri cisla, oddelene mezerou: ");
        scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z)
        printf("%d je z cisel nejvetsi", x);
    else if (y > z && y > x)
        printf("%d je z cisel nejvetsi", y);
    else
        printf("%d je z cisel nejvetsi", z);
    }