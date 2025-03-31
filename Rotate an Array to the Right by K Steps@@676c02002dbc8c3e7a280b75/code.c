#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int rotate;
    rotate=rotate%n;
    scanf("%d",&rotate);
    for(int i=(rotate-n);i<n;i++){
        printf("%d",arr[i]);
    }
    for(int i=0;i<(rotate-n);i++){
        printf("%d",arr[i]);
    }
}