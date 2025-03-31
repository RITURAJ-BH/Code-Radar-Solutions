#include <stdio.h>

int main() {
    int n, rotate;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    scanf("%d", &rotate); // ✅ Read rotation count first
    rotate = rotate % n;  // ✅ Ensure it doesn't exceed array size

    // ✅ Print rotated array
    for (int i = rotate; i < n; i++) 
        printf("%d ", arr[i]);

    for (int i = 0; i < rotate; i++) 
        printf("%d ", arr[i]);

    return 0;
}
