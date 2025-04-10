#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);  // input array size

    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);  // input array elements
    }

    int number;
    scanf("%d", &number);  // input the target number

    int found = 0;
    for (int i = 0; i < a; i++) {
        if (arr[i] == number) {
            printf("%d\n", i);  // print index where number is found
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}
