#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int rotate;
    scanf("%d",&rotate);
    for(int i=(N-rotate);i<n;i++){
        printf(arr[i]);
    }
    for(int i=0;i<rotate-i;i++){
        printf(arr[i]);
    }
}