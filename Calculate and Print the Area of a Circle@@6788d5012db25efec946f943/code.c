#include <stdio.h>
int main(){
    int radius,area;
    const pie=3.14159;
    scanf("%d",&radius);
    area= pie * pow(radius,2);
    printf("Area: %d",area);
    return 0;
}