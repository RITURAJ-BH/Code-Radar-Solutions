#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int  arr[n];
    for(int i=0;i<n;i++)scanf("%d ",&n);
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1] && arr[i+1]<arr[i]){
            printf("%d %d", arr[i],arr[i+1]);
            return 0;
        }
    }
}