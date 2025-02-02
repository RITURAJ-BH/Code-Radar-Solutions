#include <stdio.h>
int main(){
    double radius,area;
    const double pie=3.14159;
    scanf("%lf",&radius);
    area= pie * pow(radius,2);
    printf("Area: %.2f",area);
    return 0;
}