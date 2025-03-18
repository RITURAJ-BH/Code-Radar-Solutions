#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (0 < num && num <= 100) {  // Fixed condition using logical AND
        printf("In Range");
    } else {
        printf("Out of Range");
    }

    return 0;
}
