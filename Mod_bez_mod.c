#include <stdio.h>
#include <math.h>
//Operace zbytek po deleni bez vyuziti %
int main(){
    int x, y, c, v;
        printf("Zadejte delenec a delitel: ");
        scanf("%d %d", &x , &y);
    v = x / y;
    c = x - y * v;
        printf("Zbytek je %d", c);
}


 int main()    
{    
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
return 0;  
}   