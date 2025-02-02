#include <stdio.h>
int main(){
    double radius,area;
    const double pie=3.14;
    scanf("%lf",&radius);
    area= pie * radius * radius ;
    printf("Area: %.2f",area);
    return 0;
}