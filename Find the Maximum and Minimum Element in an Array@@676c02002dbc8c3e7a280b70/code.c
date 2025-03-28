#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input elements
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]); 

    // Initialize min and max correctly
    int min = arr[0];
    int max = arr[0];

    // Finding min and max values
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Print min and max
    printf("%d %d", min, max);

    return 0;
}
